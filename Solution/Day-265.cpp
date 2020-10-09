#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public: 
        vector<int>getSalary(vector<int>&v) {
            int n = v.size();
            vector<int> sol(n); 
            sol[n-1] = 1;
            for (int i=n-2; i>=0; --i) {
                if (v[i] > v[i+1]) {
                    sol[i] = sol[i+1]+1;
                } else {
                    sol[i] = 1;
                }
            }
            int counter = 2;
            for (int i=1; i<n; ++i) {
                if (v[i] > v[i-1]) {
                    sol[i] = max(sol[i] , counter);
                    ++counter;
                } else {
                    counter = 1;
                }
            }
            return sol; 
        }
};
int main(void){
//    vector<int>emp{10 , 40, 200, 1000, 60, 30}; 
//    vector<int>emp{1};
    vector<int>emp{10, 40, 200, 1000, 900, 800, 30};
    Solution s; 
    for (auto&itr:s.getSalary(emp)) {
        cout << itr << ' ';
    }
    cout << '\n';
    return 0;
}
