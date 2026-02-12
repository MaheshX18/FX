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
        
        //base case 
        if(head == NULL){
            return NULL;
        }

        //step0: check if k Nodes exist or not
        ListNode* temp = head;
        for(int i = 0; i < k; i++){
            if(temp == NULL){
                return head;
            }
            temp = temp -> next;
        }

        //step1: reverse first k nodes od linked list 
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        int count = 0;

        while(curr != NULL && count < k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        ///step2: recursion will see the next steps:
        if(next != NULL){
            head -> next = reverseKGroup(next,k);
        }

        //step3: return head of reversed list
        return prev;

    }
};