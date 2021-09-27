class MapSum {
    class Node{
        public:
            Node* node[30]; 
            bool isEnd; 
            int num; 
            Node() {
                for (int i=0; i<30; ++i) {
                    node[i] = nullptr;
                }
                isEnd = false;
                num = 0; 
            }
    };
    Node *root; 
    public:
    /** Initialize your data structure here. */
    MapSum() {
        root = new Node(); 
    }

    void insert(string key, int val) {
        Node* temp = root; 
        for (auto&itr:key) {
            if (temp -> node[itr-'a'] == nullptr) {
                temp->node[itr-'a'] = new Node(); 
            }
            temp = temp->node[itr-'a']; 
        }
        temp -> num = val; 
        temp -> isEnd = true; 
    }
    int dfs(Node*temp) {
        int res = 0; 
        if (temp == nullptr)return res; 
        if (temp-> isEnd) {
            res += temp -> num; 
        }
        for (auto itr: temp->node) {
            res += dfs(itr); 
        }
        return res; 
    }
    int sum(string prefix) {
        int res{}; 
        Node*temp = root; 
        for (auto&itr:prefix) {
            if (temp -> node[itr-'a'] != nullptr) {
                temp = temp->node[itr-'a']; 
            } else {
                return res; 
            }
        }
        return res + dfs(temp);
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
