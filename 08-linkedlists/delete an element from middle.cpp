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

    int getlength(ListNode* head){
        ListNode* curr = head;
        int length = 0;
        while(curr!=NULL){
            length++;
            curr = curr->next;
        }
        return length;
    }
    ListNode* deleteMiddle(ListNode* head) {
       int length=getlength(head);
        
        if(head==NULL){return NULL;}

        if(head->next==NULL){
            delete head;
            return NULL;
        }

         ListNode* curr = head;
       ListNode* prev = NULL;

       int position = length/2;
       int count = 1;

       if(length==position){
            head = head->next;
           curr->next = NULL;
           delete curr;
           return head;
       }

       while(count<=position){
           prev = curr;
           curr = curr->next;
           count++;
       }

        if(curr==NULL){
           prev->next = NULL;
       }
        else{
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        }     

        return head;
        
    }
};
