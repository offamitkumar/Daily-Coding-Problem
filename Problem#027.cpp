/*
 *  
    This problem was asked by Facebook.

    Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).

    For example, given the string "([])[]({})", you should return true.

    Given the string "([)]" or "((()", you should return false.

 */
#include <bits/stdc++.h>
using namespace std;
int main(int argc , char *argv[]){
    // write you code here
    stack<char>s;
    string text;
    cin >> text;
    for(int i=0;i<(int)text.size();++i){
        if(text[i]=='(' || text[i]=='{' || text[i]=='['){
            if(text[i]=='('){
                s.push(')');
            }
            if(text[i]=='{'){
                s.push('}');
            }
            if(text[i]=='['){
                s.push(']');
            }
        }else if((!s.empty()) && text[i]== s.top()){
            s.pop();
        }else{
            puts("false");
            return 0;
        }
    }
    puts("true");
    return 0;
}
