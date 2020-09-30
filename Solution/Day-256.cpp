#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class node{
    public:
        int value; 
        node*next; 
};
node* getlist(int value) {
    node* head = nullptr, *tail = nullptr;
    for (int i=1; i<=value; ++i) {
        if (head == nullptr) {
            head= new node(); 
            head->value = i; 
            tail = head;
        }else {
            tail->next = new node(); 
            tail = tail->next; 
            tail->value = i;
        }
    }
    return head;
}
class solution {
    vector<int>values; 
    void extractvalues(node*head) {
        node *temp = head;
        while(head != nullptr) {
            values.push_back(head->value);
            head = head->next;
        }
        sort(values.begin(), values.end());
        head = temp;
    }
    void setlist(node*head) {
        node*temp = head; 
        int i=0;
        while(temp != nullptr) {
            temp->value = values.at(i++);
            temp = temp->next;
        }
    }
    public:
        node* rearrange(node* head) {
            if (head == nullptr || head->next == nullptr) {
                return head;
            }
            extractvalues(head);
            for (int i=1; i+1 < (int)values.size(); i+=2) {
                swap(values.at(i) , values.at(i+1)); 
            }
            setlist(head);
            return head;
        }
};
int main(void){
    node*n1 = getlist(5); 
    solution s1; 
    s1.rearrange(n1);
    while (n1!=nullptr) {
        cout << n1->value << ' ' ;
        n1 = n1->next;
    }
    cout << '\n'; 
    return 0;
}
