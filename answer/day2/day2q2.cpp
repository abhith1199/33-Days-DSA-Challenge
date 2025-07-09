class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* curr = head;
        if (head->val > 4){
            curr = new ListNode(1);
            curr->next = head;
            head = curr;
            curr = curr->next;
        }  
        while(curr){
            curr->val = (2*curr->val)%10;
            if(curr->next && curr->next->val > 4)
               curr->val++; 

            curr = curr->next;   
        }
        return head;
    }
};