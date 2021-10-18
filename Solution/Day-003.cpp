/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
    queue<string>q;
    TreeNode* desr(void) {
        if (q.empty()) {
            return nullptr;
        }
        string temp = q.front(); 
        q.pop(); 
        if (temp =="&") {
            return nullptr; 
        }
        TreeNode* root = new TreeNode(atoi(temp.c_str())); 
        root -> left = desr(); 
        root -> right = desr(); 
        return root; 
    }
    string s; 
    void h_ser(TreeNode* root) {
        if (root == nullptr) {
            s +=  "&/";
            return ;
        }
        s += to_string(root->val) + "/"; 
        h_ser(root->left); 
        h_ser(root->right);
    }
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        s = ""; 
        h_ser(root);
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data, int index = 0) {
        string temp{}; 
        for (int i=0; i<data.size(); ++i) {
            if (data[i] == '/') {
                q.push(temp); 
                temp ="";
                continue; 
            }
            temp += data[i]; 
        }
        return desr(); 
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
