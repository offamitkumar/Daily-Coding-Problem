class Solution {
    string beginWord; 
    string endWord; 
    vector<string>wordList;
    unordered_set<string>present; 
    int min_step{INT_MAX};
    unordered_map<string,vector<string>>graph;
    unordered_map<string,int>visit_level; 
    unordered_set<string>completed; 
    void build(void){
        queue<string>q; 
        q.push(beginWord); 
        int level = 0; 
        q.push("-1"); 
        while (q.size() > 1) {
            string word = q.front(); q.pop(); 
            if (word == "-1") {
                ++level; 
                q.push(word); 
                continue;
            }
            completed.insert(word);
            for (int i=0; i<word.size(); ++i) {
                for (int j=0; j<26; ++j) {
                    string temp = word; 
                    temp[i] = char(j+'a'); 
                    if (temp == endWord) {
                        min_step = level +2 ; 
                    }
                    if (temp == word || present.find(temp) == present.end()) {
                        continue;
                    }
                    if (completed.find(temp) != completed.end()) {
                        continue; 
                    }
                    if (completed.find(temp) == completed.end() && (visit_level[temp]==0 
                                || visit_level[temp] != visit_level[word])) {
                        visit_level[temp] = level+1; 
                        graph[word].push_back(temp); 
                        q.push(temp); 
                    }
                }
            }
        }
    }
    set<deque<string>>ans; 
    map<string,bool>visited;
    void dfs(string current_node,deque<string>&c , int step) {
        if (current_node == endWord) {
            ans.insert(c); 
            return ; 
        }
        if (step > min_step) {
            return ;
        }
        for (auto&itr:graph[current_node]) {
            c.push_back(itr); 
            if (!visited[itr]) { 
                visited[itr] = true; 
                dfs(itr , c , step+1); 
                visited[itr] = false; 
            }
            c.pop_back();
        }
    }
    public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        for (auto&itr:wordList) {
            present.insert(itr);
            visited[itr] = false;
        }
        if (present.find(endWord) == present.end()) {
            return {};
        }
        this->beginWord = beginWord; 
        this->endWord = endWord; 
        this->wordList = wordList; 
        build(); 
        deque<string>c;
        c.push_back(beginWord); 
        dfs(beginWord, c , 1); 
        vector<vector<string>>res; 
        for (auto it:ans) {
            vector<string>s;
            while (!it.empty()) {
                s.push_back(it.front()); 
                it.pop_front(); 
            }
            res.push_back(s); 
        }
        return res;
    }
};
