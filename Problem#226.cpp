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


/* 
 * Idea was to use topological sorting 
 *
 * ping me if you find any error : offamitkumar@gmail.com
 *
 */

/*
 * This code might not work for invalid input 
 *
 * I'm leaving this as a Home-Work for u :)
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
            for(int k=0;k<(int)graph.size();++k)/*find the true index of this character in the graph*/{
                if(graph.at(current_Node).at(i)==graph.at(k).at(0)){
                    index = k;
                }
            }
            /* if index found the perform a dfs , but always index will be found because we made graph the in such a way
             * so just check visited and do dfs*/
            if(index!=-1 && (!visited.at(graph.at(index).at(0)))){
                dfs(graph , visited , index);
            }
        }
    }
    // push the answer in the stack for topology  
    ans.push(graph[current_Node][0]);
}

int main(void){
    vector<vector<char>>graph;
    int number_of_string;
    cin>>number_of_string;
    vector<string>str_Array(number_of_string);
    for(int i=0;i<number_of_string;++i){
        cin>>str_Array[i];
    }
    for(int i=1;i<number_of_string;++i){
        for(int j=0;j<min((int)str_Array[i].size() , (int)str_Array[i-1].size());++j)/* run for minimum string like "ab","abcd" the loop should run for ab only  */{
            if(str_Array[i][j]!=str_Array[i-1][j])/*check if jth character of both string match or not*/{
                int index = -1; // index for the parent node 
                int index_2 = -1; // index for  the child node 
                for(int k = 0;k<(int)graph.size();++k){
                    if(graph[k][0]==str_Array[i-1][j]){
                        index = k;
                    }
                    if(graph[k][0]==str_Array[i][j]){
                        index_2 = k;
                    }
                }
                if(index==-1)/*if not found that means we encountered this character first time*/{
                    graph.push_back(vector<char>(1,str_Array[i-1][j])); // add this character to graph 
                    graph.back().push_back(str_Array[i][j]); // add child also 
                }else{
                    /* if index was not -1 that means this character have already a child or we encountered the character before
                     * all we have to do now is to add the child of that character 
                     */
                    graph.at(index).push_back(str_Array[i][j]);
                }
                if(index_2==-1){
                    /* it might possible that we have encountered the child first time 
                     * so if we don't add it in our vector then it might create problem while performing dfs
                     * like if we remove below statement then for input :
                     * 3 
                     * a
                     * b
                     * c
                     * answer will be : a b (because c is not a node according to our graph);
                     *
                     */
                    graph.push_back(vector<char>(1,str_Array[i][j]));
                }
            }else{
                /* here we are not doing anything fancy , we just check if node present in our graph for that 
                 * character or if not present then we just create one 
                 */
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
