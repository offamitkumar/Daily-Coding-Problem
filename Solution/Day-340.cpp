#include <bits/stdc++.h>
using namespace std;
#define int int64_t
double dist(pair<int,int>&a , pair<int,int>&b) {
    double x= a.first-b.first;
    double y= a.second-b.second;
    x*=x;
    y*=y; 
    return sqrt(x+y);
}
vector<pair<int,int>> closestPoints(vector<pair<int,int>>&v) {
    vector<pair<int,int>>res; 
    double min_dist = INT_MAX;
    const int &n = v.size();
    for (int i=0; i<n; ++i) {
        for (int j=i+1; j<n; ++j){
            double d = dist(v[i] , v[j]);
            if (d < min_dist) {
                min_dist = d; 
                res = {v[i], v[j]};
            }
        }
    }
    return res; 
}
signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr);
#ifdef HELL_JUDGE
    freopen("input","r",stdin);
    freopen("output","w",stdout);
#endif
    vector<pair<int,int>> v = {
        {1, 1}, {-1, -1}, {3, 4}, {6, 1}, {-1, -6}, {-4, -3}
    };
    vector<pair<int,int>> res = closestPoints(v);
    for (auto&itr: res) {
        cout << itr.first << ' ' << itr.second << '\n'; 
    }
    return 0;
}
