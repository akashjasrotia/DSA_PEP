class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* temp1 = head;
        ListNode* temp2 = temp1->next;
        ListNode* prev = temp2;
        while(temp2 && temp2->next){
            temp1->next = temp2->next;
            temp1 = temp1->next;
            temp2->next = temp2->next->next;
            temp2=temp2->next;
        }
        temp1->next = prev;
        return head;

    }
};