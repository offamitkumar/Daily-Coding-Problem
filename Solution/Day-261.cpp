#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
struct Node{
    char ch; 
    bool leaf; 
    int freq; 
    Node* leftTree; 
    Node* rightTree;
    Node() {
        ch = '-';
        leaf = false; 
        freq = 0;
        leftTree = nullptr; 
        rightTree = nullptr; 
    }
    Node(char node_ch , int num) {
        ch = node_ch; 
        freq = num; 
        leaf = true; 
        leftTree = nullptr; 
        rightTree = nullptr; 
    }
    Node(const Node&n1){
        ch = n1.ch; 
        freq = n1.freq; 
        leaf = n1.leaf;
        leftTree= n1.leftTree;
        rightTree= n1.rightTree;
    }
    Node(int fr) {
        ch = '-';
        freq = fr; 
        leaf = false; 
        leftTree = nullptr; 
        rightTree = nullptr; 
    }
};
Node* getTree(queue<Node>&q) {
    if (q.size() == 1) {
        Node *n = &q.front();
        q.pop();
        return n;
    }
    Node *n1 = new Node(q.front()); q.pop(); 
    Node *n2 = new Node(q.front()); q.pop(); 
    Node n3(n1->freq + n2->freq);
    n3.leftTree = n1; 
    n3.rightTree = n2;
    q.push(n3);
    Node*n = getTree(q);
    return n;
}
void getCode(map<char,string>&code , Node*n1 , const string &path) {
    if(n1->ch != '-') {
        if(n1->ch != 0) {
            code[n1->ch] = path; 
        }
        return;
    }
    if(n1->leftTree)
        getCode(code , n1->leftTree, path+"0");
    if(n1->rightTree)
        getCode(code , n1->rightTree, path+"1");
}
Node* buildTree(vector<string>&words) {
    map<char , int> freq; 
    for (auto&word:words) {
        for (auto&ch:word) {
            freq[ch]++;
        }
    }
    vector<Node>nodes; 
    for (auto&itr:freq) {
        cout << "[" << itr.first <<"," << itr.second << "], ";
        nodes.push_back(Node(itr.first, itr.second));
    }
    cout << '\n'; 
    sort(nodes.begin(), nodes.end(), [](const Node&n1 ,const Node&n2) {return n1.freq < n2.freq;});
    queue<Node>q; 
    for (int i=0; i<(int)nodes.size(); ++i) {
        q.push(nodes.at(i));
    }
    Node* n = getTree(q);
    return n;
}

int main(void){
    vector<string> words {"cats"};
    Node *tree= buildTree(words);
    map<char , string>code; 
    getCode(code , tree, ""); 
    for (auto&itr: code) {
        cout << itr.first <<' ' << itr.second << '\n'; 
    }
    return 0;
}
