/*
   This problem was asked by Dropbox.

   Given the root to a binary search tree, find the second largest node in the tree.
  
 */
#include <bits/stdc++.h>
using namespace std;

/*
 *  we will go  in reverse in-order of the tree , 2-nd node will be our answer
 */


struct Node { 
    int key; 
    Node *left, *right; 
}; 
  
Node *newNode(int item) { 
    Node *temp = new Node; 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 

Node* insert(Node* node, int key) { 
    if (node == NULL) return newNode(key); 
  
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key); 
  
    return node; 
} 
int node_counter = 0;
void second_largest(Node *root){
    if(root == NULL || node_counter >= 2){
        return ;
    }

    second_largest(root -> right);

    node_counter++;
    
    if(node_counter == 2){
        cout << root -> key << '\n' ;
        return ;
    }

    second_largest(root -> left);
}

int main(int argc , char *argv[]){
    // write you code here

    Node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 

    // if answer is -1 , the there might be something wrong with input , i.e. tree is of just one node [root] so in that case we can't find
    // our answer 

    second_largest(root);

    return 0;
}
