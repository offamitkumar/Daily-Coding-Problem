#include <bits/stdc++.h>
using namespace std;
class Solution {
    map<char , vector<string>>fr; 
    map<string , vector<string>>graph;
    unordered_set<string>visited;
    void dfs(string&node) {
        if(visited.find(node) != visited.end()) {
            return ; 
        }
        visited.insert(node);
        for(auto&itr:graph[node]) {
            dfs(itr);
        }
    }
    public:
        bool chainPresent(vector<string>&v) {
            fr.clear(); 
            visited.clear();
            bck.clear(); 
            graph.clear();
            for(auto&itr:v) {
                fr[itr[0]].push_back(itr); 
            }
            for(auto&itr:fr) {
                for(auto&it:itr.second) {
                    char lastchar = it[it.length()-1];
                    for(auto&i:fr[lastchar]) {
                        graph[it].push_back(i);
                    }
                }
            }
            dfs(v[0]);
            return visited.size() == v.size(); 
        }
};
signed main(void){
    vector<string>v = {"chair", "height", "racket","touch", "tunic"}; 
    //vector<string>v = {"aa" , "ba" , "ab" }; 
    Solution s; 
    if (s.chainPresent(v)) {
        cout << "Can be Chained" << '\n'; 
    } else {
        cout << "Can't chained" << '\n'; 
    }
    return 0;
}
