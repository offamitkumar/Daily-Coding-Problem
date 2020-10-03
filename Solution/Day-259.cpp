#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
        vector<char> getMove (vector<string>&s) {
            map<char , set<int>> f; 
            for (auto&itr: s)  {
                f[itr[0]].insert((int)itr.size());
            }
            vector<char>good;
            for (auto&itr:f) {
                if (none_of(itr.second.begin(), itr.second.end() , [](int x) { return x%2!=0; })) {
                    good.push_back(itr.first);
                }
            }
            return good;
        }
};
int main(void){
    vector<string>dict {"cat" , "calf" , "dog" , "bear"}; 
    Solution s; 
    vector<char>v = s.getMove(dict);
    for (auto&itr : v) {
        cout << itr << ' ';
    }
    return 0;
}
