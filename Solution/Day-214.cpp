#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(const bitset<66>& nums) {
        int max_{} , t{}; 
        for(int i=0; i<(int)nums.size(); ++i){
            if(nums[i]){
                t++; 
            }else{
                if(t > max_){
                    max_ = t;
                }
                t = 0;
            }
        }
        if(t > max_){
            max_ = t;
        }
        return max_;
    }
};

int main(void){
    Solution s; 
    int num; cin >> num; 
    cout << s.findMaxConsecutiveOnes(bitset<66>(num)) << '\n'; 
}
