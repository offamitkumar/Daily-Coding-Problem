class Solution {
public:
    string minRemoveToMakeValid(string s) {
        const int n = (int)s.size();
        stack<int>st;
        for(int i=0;i<n;++i){
            if(s[i]=='('){
                st.push(i);
                s[i]='.';
            }else if(s[i]==')'){
                if((!st.empty()) && s[st.top()]=='.'){
                    s[st.top()]='(';
                    st.pop();
                }else{
                    s[i]='.';
                }
            }
        }
        string res;
        for(int i=0;i<n;++i){
            if(s[i]!='.'){
                res+=s[i];
            }
        }
        return res;
    }
};

