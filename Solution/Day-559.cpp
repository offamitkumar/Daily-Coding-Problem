/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *res_head , *res_end; 
        res_head = res_end = nullptr; 
        set<pair<int, ListNode*>> h; 
        for (int i=0; i<lists.size(); ++i) {
            if (lists[i] != nullptr) {
                h.insert(make_pair(lists[i]->val , lists[i])); 
            }
        }
        while (!h.empty()) {
            ListNode *temp =  h.begin()->second; 
            if ( res_head == nullptr) {
                res_head = temp; 
                res_end = temp; 
            } else {
                res_end->next = temp; 
                res_end = res_end->next; 
            }
            if (temp->next != nullptr) {
                h.insert(make_pair(temp->next->val , temp->next)); 
            }
            h.erase(h.begin()); 
        }
        return res_head;
    }
};
