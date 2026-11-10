#include<stdlib.h>



struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    struct ListNode* cur1 = l1;
    struct ListNode* cur2 = l2;
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode* out = &dummy;
    while(cur1!= NULL || cur2!= NULL || carry!=0 ){
        int x = (cur1!=NULL)? cur1->val : 0;
        int y = (cur2!=NULL)? cur2->val : 0;
        int sum = x+y+carry;
        carry = sum/10;
        int digit = sum%10;
        struct ListNode* new = malloc(sizeof(struct ListNode));
        new->val = digit;
        new->next = NULL;
        out->next = new;
        out = new;
        if(cur1!=NULL){
            cur1= cur1->next;
        }
        if(cur2!=NULL){
            cur2= cur2->next;
        }
    }
    return dummy.next;
    
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna