#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
class Solution{
    public: 
        vector<vector<int>>closer;
        void dfs(vector<vector<int>>&graph , int parent , int root) {
            if (graph.size() == 1) {
                return; 
            }
            for (auto&itr: graph.at(parent)) {
                if (closer.at(root).at(itr) == 0) {
                    closer.at(root).at(itr) = 1; 
                    dfs(graph , itr , root);
                }
            }
        }
        void setCloser(vector<vector<int>>&graph) {
            closer.resize(graph.size() , vector<int>(graph.size())); 
            for (int i=0; i <(int)graph.size(); ++i) {
                closer.at(i).at(i) = 1;
                dfs(graph,i, i);
            }
        }
};
int main(void){
    vector<vector<int>> graph(4); 
    graph.at(0).push_back(0); graph.at(0).push_back(1); graph.at(0).push_back(3); 
    graph.at(1).push_back(1); graph.at(1).push_back(2); 
    graph.at(2).push_back(2); 
    graph.at(3).push_back(3);

    vector<vector<int>> closer = {
        {1, 1, 1, 1} , 
        {0, 1, 1, 0} , 
        {0, 0, 1, 0} , 
        {0, 0, 0, 1}
    };
    Solution s; 
    s.setCloser(graph);
    for (int i=0; i<(int)closer.size(); ++i) {
        for (int j=0; j<(int)closer.at(0).size(); ++j) {
            assert(closer.at(i).at(j) == s.closer.at(i).at(j));
        }
    }
    return 0;
}
