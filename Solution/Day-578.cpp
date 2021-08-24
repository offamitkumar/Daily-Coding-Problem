class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>c; 
        map<char,char>d; 
        for(int i=0; i<(int)s.length(); ++i) {
            if (c.find(s[i]) == c.end()) {
                c[s[i]] = t[i]; 
            } else if (c[s[i]] != t[i]) {
                return false; 
            }
            if (d.find(t[i]) == d.end()) {
                d[t[i]] = s[i]; 
            } else if (d[t[i]] != s[i]) {
                return false; 
            }
        }
        return true;
    }
};
