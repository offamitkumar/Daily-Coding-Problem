/*
 *
 * This problem was asked by Google.  
 * An XOR linked list is a more memory efficient doubly linked list. 
 *
 * Instead of each node holding next and prev fields, it holds a field named both, 
 * which is an XOR of the next node and the previous node. 
 *
 * Implement an XOR linked list; 
 * it has an add(element) which adds the element to the end, and a get(index) which returns the node at index.  
 *
 *
 * If using a language that has no pointers (such as Python), 
 * you can assume you have access to get_pointer and dereference_pointer functions that 
 * converts between nodes and memory addresses.
 *
 *
 */

/*
 *
 * As Xor link list is explained in the question ,, let's implement 
 *
 */

#include <bits/stdc++.h>
#include <inttypes.h>
using namespace std;
struct NODE{
    public:
        int data;
        NODE *npx; // reference as Next Previous Xor
};
NODE* Xor(NODE*a , NODE*b){
    return (NODE*)((uintptr_t)a ^ (uintptr_t)b);
}
NODE* PREV = NULL; // store address of previous NODE form last NODE
NODE* END  = NULL; // store address of last Node 
NODE* NEXT = NULL; // store address of upcoming Node (isn't interesting :)
void add(NODE**HEAD , int value){
    NODE *new_node  = new NODE();

    new_node -> data = value;

    if(*HEAD!=NULL){
        END->npx = Xor(PREV , new_node);
        PREV = END;
        END = new_node;
        END->npx = Xor(PREV , NEXT);
    }else{
        new_node->npx = Xor(PREV , NEXT);
        *HEAD = new_node;
        END = new_node;
    }

    return ;
}
void print(NODE*HEAD){
    NODE * current  = HEAD;
    NODE * Prev = NULL;
    NODE * Next = NULL;
    while(current!=NULL){
        cout<<current->data<<' ';
        Next = Xor(current->npx , Prev);
        Prev = current;
        current = Next;
    }
    cout<<endl;
}
int main(void){
    NODE *head = NULL;
    add(&head , 10);
    add(&head , 20);
    add(&head , 30);
    add(&head , 40);
    add(&head , 50);
    add(&head , 60);
    print(head);
    return 0;
}
