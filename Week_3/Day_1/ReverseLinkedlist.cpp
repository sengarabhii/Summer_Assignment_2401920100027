class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //linked list having 0 or 1 node
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nxt = head->next;
        while(nxt!=NULL){
            curr->next = prev;
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
        }
        curr->next = prev;
        head = curr;
        return head;

        
    }
};
