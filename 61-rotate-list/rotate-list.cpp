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
    ListNode* rotateRight(ListNode* head, int k) {
        // base condition for if not present
        if(head == nullptr || head->next == nullptr || k==0) return head;
        
        ListNode* tail = head;
        int cnt = 1;
        //1.) to find the length
        while(tail->next != nullptr){ // loop to find the length of the linked list
            tail = tail->next;
            cnt++;
        }
        //here hamara temp jo hai woh tail bn gya ab
        // 2.) to check how many times we need to rotate the list
        k = k%cnt;
        if(k==0) return head;
        // 3.) now we will see the loop and assign the new head ki wahan se rotate krdo
        ListNode *current = head;
        for(int i = 1 ; i < cnt - k ; i++){
            current = current->next;
        }
        ListNode * newHead = current->next;
        current->next = nullptr;
        tail->next = head;
        return newHead;
    }
};