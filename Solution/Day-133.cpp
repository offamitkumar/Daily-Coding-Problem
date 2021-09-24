/*
   struct Node {
   int data;
   Node *left;
   Node *right;

   Node(int val) {
   data = val;
   left = right = NULL;
   }
   };
 */

class Solution{
    Node*temp;
    bool found = false; 
    bool next=false; 
    void dfs(Node* root ,Node *x) {
        if (root==nullptr) return; 
        if (found) {
            return ;
        }
        if (root->data == x->data) {
            next = true; 
            dfs(root->right, x); 
            return; 
        }
        if (root->left == nullptr && root->right==nullptr) {
            if (next) {
                temp = root; 
                next = false; 
                found = true;
            }
            return ; 
        }
        dfs(root->left , x); 
        if (next) {
            temp = root; 
            next = false; 
            found = true;
        }
        dfs(root->right , x); 
    }
    public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x) {
        dfs(root ,x);
        if (next) {
            temp = nullptr; 
        }
        return temp; 
    }
};
