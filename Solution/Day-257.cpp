#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;
class Solution{ 
    public:
        pair<int,int> getInterval(vector<int>&v) {
            int low =0 ,high = v.size()-1; 
            int max_seen = v.at(0);
            while (low < high) {
                if (v.at(low) >= max_seen) {
                    max_seen = v.at(low);
                    ++low; 
                } else {
                    break;
                }
            }
            max_seen = v.at(high);
            while (low < high) {
                if (v.at(high) <= max_seen) {
                    max_seen = v.at(high);
                    --high;
                } else {
                    break;
                }
            }
            if ((low-1) == (high+1)) {
                return make_pair(-1,-1);
            } else {
                return make_pair(low-1, high+1);
            }
        }
};
int main(void){
    vector<int>v{3, 7, 5, 6, 9};
    Solution s; 
    auto p = s.getInterval(v);
    cout << p.first << ' ' << p.second << '\n'; 
    return 0;
}
