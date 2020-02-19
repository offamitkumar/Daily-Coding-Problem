#include <bits/stdc++.h>
#define ALPHABETS 26
using namespace std;
struct Node{
    Node*pointer[ALPHABETS];
    bool is_End_Of_Word;
    Node(){
        for(int i=0;i<ALPHABETS;++i){
            pointer[i]=nullptr;
        }
        is_End_Of_Word=false;
    }
};
void add(Node*Root , string word){
    int word_Size = (int)word.size();
    Node*root = Root;
    for(int i=0;i<word_Size;++i){
        int index = word[i]-'a';
        if(root->pointer[index]==nullptr){
            root->pointer[index] = new Node();
        }
        root = root->pointer[index];
    }
    root->is_End_Of_Word=true;
}
bool okay = true; // just for the test whether answer exist or not 
string getans(Node*Root,string &test_String , int index_Traversed=0){
    if(!okay){
        return "";
    }
    Node*root = Root;
    string temp="";
    for(int &i=index_Traversed;okay && i<test_String.size();++i){
        int index = test_String[i]-'a';
        if(root->pointer[index]==nullptr){
            okay = false;
        }else{
            temp+=char(int('a')+index);
            root=root->pointer[index];
        }
        if(root->is_End_Of_Word){
            index_Traversed++;
            break;
        }
    }
    if(index_Traversed>=(int)test_String.size()){
        return temp;
    }
    temp+=" ";
    if(!okay){
        return "";
    }else{
        return temp+getans(Root,test_String,index_Traversed);
    }
}
int main(void){
    Node*root1 = new Node();
    add(root1,"quick");
    add(root1,"brown");
    add(root1,"the");
    add(root1,"fox");
    string test1="thequickbrownfox";
    string res1 = getans(root1,test1);
    if(okay){
        cout<<res1<<endl;
    }else{
        cout<<"NO RESULT"<<endl;
    }
    okay = true; // for the next test let's just make it true again [might possible that last test make it false]
    Node*root2 = new Node();
    add(root2,"bed");
    add(root2,"bath");
    add(root2,"bedbath");
    add(root2,"and");
    add(root2,"beyond");
    string test2 = "bedbathandbeyond";
    string res2 = getans(root2,test2);
    if(okay){
        cout<<res2<<endl;
    }else{
        cout<<"NO RESULT"<<endl;
    }
    return 0;
}
