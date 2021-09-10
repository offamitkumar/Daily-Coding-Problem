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
