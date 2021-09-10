/*
   if you try to simulate then at most 7 steps are possible to reach to kaprekar's constant. 
   so a brute force solution should be accepted. I didn't find any pattern so preprocessing will
   be a stupid thing to do here. 

   Numbers, which have all digits same can never reach, so make sure to apply a condition here that all digit
   shouldn't be same, maybe we can return -1, for numbers like 0000 , 1111, 2222, 3333, 4444 ... 9999. 

   */

#include <bits/stdc++.h>
using namespace std;
class Solution{ 
    static const int kaprekar_constant = 6174;
    public:
        int stepsForKaprekarConstant(int num) {
            int step{}; 
            while (num != kaprekar_constant) {
                string temp = to_string(num);
                sort(temp.begin(), temp.end());
                int num_small = atoi(temp.c_str());
                reverse(temp.begin(), temp.end());
                int num_big = atoi(temp.c_str()); 
                num = num_big - num_small; 
                step++;
            }
            return step;
        }
};
signed main(void){
    Solution sol; 
    int num; cin >> num; 
    cout << sol.stepsForKaprekarConstant(num) << '\n'; 
    return 0;
}
