#include <iostream>
#include <vector>
#include <utility>
using namespace std;
class Solution {
    vector<int>inTime, minFoundTime; 
    vector<pair<int,int>>bridge;
    int timer;
    void getBridges(vector<vector<int>>&graph , int node=0, int parent=-1) {
        inTime[node] = minFoundTime[node] = timer++;
        int countChild{};
        bool isBridge = false;
        for (auto&itr: graph[node]) {
            if (itr != parent) {
                ++countChild;
                if (inTime[itr] == -1) {
                    getBridges(graph, itr, node);
                }
                if (inTime[node] < minFoundTime[itr]) {
                    bridge.push_back(make_pair(node , itr));
                }
                minFoundTime[node] = min(minFoundTime[node], minFoundTime[itr]);
            }
        }
    }
    public:
        vector<pair<int,int>> findBridges(vector<vector<int>>&graph) {
            timer = 0; 
            inTime.assign(graph.size(), -1); 
            minFoundTime.resize(graph.size());
            getBridges(graph);
            inTime.clear(); 
            minFoundTime.clear(); 
            return bridge;
        }
};
int main(void){
    vector<vector<int>>graph1; 
    graph1.resize(5); // edges are 0 based 
    graph1.at(0).push_back(1);
    graph1.at(1).push_back(0); 
    graph1.at(2).push_back(1); 
    graph1.at(1).push_back(2); 
    graph1.at(2).push_back(3); 
    graph1.at(3).push_back(2);
    Solution s;
    vector<pair<int,int>> bridge = s.findBridges(graph1);
    for (auto&itr : bridge) {
        cout << itr.first << ' ' << itr.second << '\n';
    }
    cout << '\n'; 
    return 0;
}
