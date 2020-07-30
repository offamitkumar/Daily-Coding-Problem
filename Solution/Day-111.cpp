class Solution {
    public:
        vector<int> findAnagrams(string s, string p) {
            std::map<char, int> f;
            for(auto&itr:p){
                f[itr]++;
            }
            std::vector<int> ans;
            int left{} , right{} , counter = p.size(); 
            while(right <(int)s.size()){
                if(f[s[right++]]-- >= 1) counter --; 
                if(counter==0)ans.push_back(left); 
                if(right-left == (int)p.size() && f[s[left++]]++>=0)counter++;
            }
            return ans;
        }
};
