#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> stabbingPoints(vector<pair<int,int>>inter) {
            sort(inter.begin() , inter.end() , [](pair<int,int>a , pair<int,int>b) {
                    if (a.second == b.second) {
                    return a.first < b.second;
                    } else {
                    return a.second < b.second;
                    }
                    }); 
            vector<int>ans; 
            int last = numeric_limits<int>::min();
            for(int i=0; i<inter.size(); ++i) {
                if (last < inter.at(i).first) {
                    ans.push_back(inter.at(i).second); 
                    last = inter.at(i).second;
                }
            }
            return ans;
        }
};
int main(void){
    vector<pair<int,int>> interval = {{1,4},{4,5},{7,9},{9,12}};
    Solution s; 
    vector<int>ans = s.stabbingPoints(interval); 
    for(const auto&itr:ans) {
        cout << itr << ' ';
    }
    cout << '\n'; 
    return 0;
}
