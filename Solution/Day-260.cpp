#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
        vector<int> getArray(vector<char>&v) {
            int negCounter = count_if(v.begin(), v.end(), [](char ch) { return ch=='-';}); 
            int start = negCounter; 
            vector<int> ans(v.size(), -1);
            ans[0] = start++;
            --negCounter; 
            for (int i=1; i<(int)v.size(); ++i) {
                if (v.at(i) == '+') {
                    ans.at(i) = start++;
                } else {
                    ans.at(i) = negCounter--;
                }
            }
            return ans;
        }
};
int main(void){
//    vector<char> v{'*', '+' , '+' , '-', '+'}; 
    vector<char> v{'*', '-', '-', '-', '+', '+'};
    Solution s;
    vector<int> sol = s.getArray(v);
    for (auto&itr:sol) {
        cout << itr <<' ';
    }
    cout << '\n';
    return 0;
}
