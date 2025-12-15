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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // ListNode * temp = head;
        // ListNode * tail = head;
        // ListNode * left1 = left;
        // ListNode * right1 = right;
        // while(temp->next != right){
        //     ListNode * temp = left;
        //     temp = temp->next;
        // }
        // while(tail->next){
        //     tail = tail->next;
        // }
        // head->next = right1;
        // right1->next = temp;
        // temp->next = left1;
        // left1->next = tail;
        // return head;

        if(!head || left == right) return head;
        ListNode * dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode * prev = dummyhead;
        for (int i = 0; i < left - 1; i++) {
            prev = prev->next;
        }
        ListNode * curr = prev->next;
        for(int i = 0 ; i <right - left; i++){
            // current = current->next;
            ListNode* temp = curr->next;
            curr->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }
        return dummyhead->next;
    }
};