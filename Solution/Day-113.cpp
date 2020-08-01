class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin() , s.end()); 
        for(int i=0,j=0;i<(int)s.size();++i){
            if(s[i]==' '){
                if(i == 0){
                    continue;
                }
                reverse(s.begin()+j, s.begin()+i);
                j = i+1;
            }
            if(i+1==s.size()){
                reverse(s.begin()+j , s.begin()+i+1);
            }
        }
        

        // if there were no redundant space then we don't require below operations and we can 
        // return 's'. But as redundant spaces are given in leetcode problem, I guess we can't 
        // do better. 

        string res;
        int i = 0; 
        int j = (int)s.size()-1; 
        while(i<(int)s.size() && s[i]==' '){
            ++i;
        }
        while(j>i && s[j]==' '){
            --j;
        }
        while(i<=j){
            if(s[i]==' ' && s[i-1]==' '){
                ++i;
                continue;
            }
            res+=s[i];
            ++i;
        }
        return res;
    }
};
