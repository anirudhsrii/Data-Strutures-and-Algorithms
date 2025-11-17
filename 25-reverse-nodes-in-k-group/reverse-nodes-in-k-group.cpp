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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int cnt = 0;
        // First part mai hum check krenge ki k nodes exit krti hai ya nhi linked list mai
        while(cnt < k){
            if(temp == nullptr) return head;
            temp = temp->next;
            cnt++;
        }

        // now for the 2nd check we will see here that ki hum kaise
        // recursively call krenge wapas se function ko bache hue linked list mai
        ListNode *prevNode = reverseKGroup(temp,k); // jahan pr temp point kr rha hai whi se start krega
        
        // Now for the 3rd part hum check krenge ki reverse kaise kre 1st k group of linked list
        temp = head; // phir se initialize krenge
        cnt = 0;
        while(cnt < k){
            ListNode *newNode = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = newNode;
            cnt++;
        }
        return prevNode; 
    }
};