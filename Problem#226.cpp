/*
 * This problem was asked by Airbnb.  
 *
 * You come across a dictionary of sorted words in a language you've never seen before. 
 *
 * Write a program that returns the correct order of letters in this language.  
 *
 * For example, given ['xww', 'wxyz', 'wxyw', 'ywx', 'ywz'], you should return ['x', 'z', 'w', 'y'].
 *
 */
#include <bits/stdc++.h>
using namespace std;
stack<char>ans;
void dfs(vector<vector<char>>&graph , vector<bool>&visited ,const int &current_Node){
    visited.at(graph[current_Node][0]) = true;
    for(int i=0;i<graph.at(current_Node).size();++i){
        if(!visited.at(graph.at(current_Node).at(i))){
            int index = -1;
            for(int k=0;k<(int)graph.size();++k){
                if(graph.at(current_Node).at(i)==graph.at(k).at(0)){
                    index = k;
                }
            }
            if(index!=-1 && (!visited.at(graph.at(index).at(0)))){
                dfs(graph , visited , index);
            }
        }
    }
    ans.push(graph[current_Node][0]);
}

int main(void){
    freopen("input","r",stdin);
    vector<vector<char>>graph;
    int number_of_string;
    cin>>number_of_string;
    vector<string>str_Array(number_of_string);
    for(int i=0;i<number_of_string;++i){
        cin>>str_Array[i];
    }
    for(int i=1;i<number_of_string;++i){
        for(int j=0;j<min((int)str_Array[i].size() , (int)str_Array[i-1].size());++j){
            if(str_Array[i][j]!=str_Array[i-1][j]){
                int index = -1;
                for(int k = 0;k<(int)graph.size();++k){
                    if(graph[k][0]==str_Array[i-1][j]){
                        index = k;
                    }
                }
                if(index==-1){
                    graph.push_back(vector<char>(1,str_Array[i-1][j]));
                    graph.back().push_back(str_Array[i][j]);
                }else{
                    graph.at(index).push_back(str_Array[i][j]);
                }
            }else{
                bool present = false;
                for(int k=0;k<(int)graph.size();++k){
                    if(graph[k][0]==str_Array[i-1][j]){
                        present = true;
                    }
                }
                if(!present){
                    graph.push_back(vector<char>(1,str_Array[i-1][j]));
                }
            }
        }
    }
    vector<bool>visited(300,false);
    for(int i=0;i<(int)graph.size();++i){
        if(!visited.at(graph[i][0])){
            dfs(graph , visited , i);
        }
    }
    while(!ans.empty()){
        cout<<ans.top()<<' ';
        ans.pop();
    }
    return 0;
}
