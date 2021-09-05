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
NODE * get(int index ,NODE *HEAD){
    NODE * current  = HEAD;
    NODE * Prev = NULL;
    NODE * Next = NULL;
    int i=1;
    while(i<index){
        i++;
        Next = Xor(current->npx , Prev);
        Prev = current;
        current = Next;
    }
    return current;
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
    NODE *head = NULL; // you can make it global variable so that you don't have to pass it 
    add(&head , 10);
    add(&head , 20);
    add(&head , 30);
    add(&head , 40);
    add(&head , 50);
    add(&head , 60);
    print(head);
    cout<<endl;
    // assumed that index will be valid 
    int index = 3;  
    NODE *node = get(index,head); // we can make head a global variable that doesn't effect the solution
    assert(node->data==30);
    cout<<node->data<<endl; // 30 
    return 0;
}
