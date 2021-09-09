class Solution {
    vector<string>ans;
    set<string>temp;
    vector<vector<bool>>visited;
    int row , col;
    class Node{
        public:
            bool isEnd;
            Node* character[26];
            Node(){
                isEnd = false;
                for(int i=0;i<26;++i){
                    character[i] = nullptr;
                }
            }
    };
    Node* root = nullptr;
    void add(string &word , Node*root){
        Node*temp = root;
        for(auto&itr:word){
            int index = itr-'a';
            if(temp->character[ index ] == nullptr){
                temp ->character[ index ] = new Node();
            }
            temp = temp -> character[ index ];
        }
        temp -> isEnd = true;
    }
    bool present(Node*root , int index){
        if(root==nullptr or root->character[ index ] == nullptr){
            return false;
        }else{
            return true;
        }
    }
    void search(vector<vector<char>>&board ,int r, int c, Node* root , string s){
        if(root->isEnd == true ){
            temp.insert(s);
        }
        visited[r][c] = true;
        if(r+1<row && visited[r+1][c]==false){
            int index = board[r+1][c] -'a';
            if(present(root , index)){
                search(board , r+1 , c , root ->character[ index ] , s+board[r+1][c]);
            }
        }
        if(r-1>=0 && visited[r-1][c]==false){
            int index = board[r-1][c] -'a';
            if(present(root , index)){

                search(board , r-1 , c , root ->character[ index ] , s+board[r-1][c]);
            }
        }
        if(c+1<col && visited[r][c+1]==false){
            int index = board[r][c+1] -'a';
            if(present(root , index)){

                search(board , r , c+1 , root ->character[ index ] , s+board[r][c+1]);
            }
        }
        if(c-1>=0 && visited[r][c-1]==false){
            int index = board[r][c-1] -'a';
            if(present(root , index)){
                search(board , r , c-1 , root ->character[ index ] , s+board[r][c-1]);
            }
        }
        visited[r][c] = false;
    }
public:
    Solution(){
        root = new Node();
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        row = board.size();
        col = board[0].size();
        visited.resize(row , vector<bool>(col,false));
        for(auto&word:words){
            add(word , root);
        }
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                int index = board[i][j]-'a';
                if(present(root , index)){
                    string res ="";
                    res+=board[i][j];
                    search(board , i , j , root->character[index] ,res);
                }
            }
        }
        for(auto&itr:temp){
            ans.push_back(itr);
        }
        return ans;
    }
};
