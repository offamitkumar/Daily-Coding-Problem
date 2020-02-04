#include <bits/stdc++.h>
using namespace std;
int lengthLongestPath(string input) {
    stringstream ss(input);
    string tok;
    vector<string> stk;
    int ans = 0;
    while(std::getline(ss, tok, '\n')) {
        cout<<tok<<endl;
        int i = 0;
        while(tok[i] == '\t') ++i;
        while(stk.size() >  i) stk.pop_back();
        tok = tok.substr(i);
        
        if(tok.find('.') != string::npos) {
            int n = 0;
            for(auto s : stk)
                n += s.size() + 1;
            n += tok.size();
            if(n > ans) ans = n;
        }else
            stk.push_back(tok);
    }
    return ans;
}
string stringToString(string input) {
    assert(input.length() >= 2);
    string result;
    for (int i = 0; i < input.length() -1; i++) {
        char currentChar = input[i];
        if (input[i] == '\\') {
            char nextChar = input[i+1];
            switch (nextChar) {
                case '\"': result.push_back('\"'); break;
                case '/' : result.push_back('/'); break;
                case '\\': result.push_back('\\'); break;
                case 'b' : result.push_back('\b'); break;
                case 'f' : result.push_back('\f'); break;
                case 'r' : result.push_back('\r'); break;
                case 'n' : result.push_back('\n'); break;
                case 't' : result.push_back('\t'); break;
                default: break;
            }
            i++;
        } else {
          result.push_back(currentChar);
        }
    }
    return result;
}
int main(void){
    freopen("input","r",stdin);
    string s;cin>>s;
    s = stringToString(s);
    cout<<lengthLongestPath(s)<<endl;
    return 0;
}
