#include <iostream>
#include <stack>
#include <vector>
using namespace std;
struct Node;
struct Node {
    int left; 
    int right; 
    Node () {
        left = -1; 
        right = -1;
    }
};
struct Solution {
    vector<int>spiralOrder; 
    vector<int> getSpiralOrder(const vector<Node>&tree, int root) {
        stack<int>leftToRight , rightToLeft; 
        leftToRight.push(root); 
        while ((!leftToRight.empty()) || (!rightToLeft.empty())) {
            while (!leftToRight.empty()) {
                int node = leftToRight.top(); leftToRight.pop(); 
                if (tree.at(node).left != -1) {
                    rightToLeft.push(tree.at(node).left);
                }
                if (tree.at(node).right != -1) {
                    rightToLeft.push(tree.at(node).right);
                }
                spiralOrder.push_back(node);
            }
            while (!rightToLeft.empty()) {
                int node = rightToLeft.top(); rightToLeft.pop(); 
                if (tree.at(node).right != -1) {
                    leftToRight.push(tree.at(node).right);
                }
                if (tree.at(node).left != -1) {
                    leftToRight.push(tree.at(node).left);
                }
                spiralOrder.push_back(node);
            }
        }
        return spiralOrder; 
    }
};
int main(void){
    vector<Node> tree(8); 
    tree.at(1).left = 2; 
    tree.at(1).right = 3; 
    tree.at(2).left = 4; 
    tree.at(2).right = 5; 
    tree.at(3).left = 6; 
    tree.at(3).right = 7;

    Solution s; 
    const vector<int>&spiralOrder = s.getSpiralOrder(tree, 1);
    for (const auto& itr: spiralOrder) {
        cout << itr <<' ';
    }
    cout << '\n'; 
    return 0;
}
