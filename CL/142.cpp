/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        // map<ListNode*, bool> visited;

        // ListNode* temp = head;

        // while(temp != NULL){
        //     if(visited[temp] == true){
        //         return temp;
        //     }
        //     visited[temp] = true;
        //     temp = temp -> next;
        // }

        // return NULL;


        // 2nd method

         if(head == NULL) {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {

                slow = head;

                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;   // start of cycle
            }
        }
        return NULL;
        
    }
};