class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == NULL){
            return NULL;
        }

        while(head != NULL){

            if(head->next != NULL && head->val == head->next->val){

                int val = head->val;

                while(head != NULL && head->val == val){
                    ListNode* del = head;
                    head = head->next;
                    delete del;
                }
            }
            else{
                break;
            }
        }

        if(head == NULL) return NULL;

        ListNode* prev = head;
        ListNode* temp = head->next;
        
        while(temp != NULL){

            if(temp->next != NULL && temp->val == temp->next->val){

                int val = temp->val;

                while(temp != NULL && temp->val == val){
                    ListNode* del = temp;
                    temp = temp->next;
                    delete del;
                }

                prev->next = temp;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};