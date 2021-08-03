class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        unordered_set<int> pref; 
        int maxx=0 , mask=0; 
        for (int i=31; i>=0; --i) {
            mask |= (1<<i); 
            for (auto&itr:nums) {
                pref.insert(itr&mask); 
            }
            int answer = maxx|(1<<i); 
            for (auto&itr:pref) {
                if (pref.find(itr^answer) != pref.end()) {
                    maxx = answer; 
                    break;
                }
            }
            pref.clear();
        }
        return maxx; 
    }
};
