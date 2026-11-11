/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode dummy;
    dummy.next = head;
    int count = 0;
    struct ListNode* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    struct ListNode* prev1 = &dummy;
    struct ListNode* cur1 = head;
    for(int i=1;i<k;i++){
        prev1 = cur1;
        cur1 = cur1->next;
    }
    struct ListNode* prev2 = &dummy;
    struct ListNode* cur2 = head;
    for(int i=0;i<count-k;i++){
        prev2 = cur2;
        cur2 = cur2->next;
    }
    if(cur1 == cur2) {
    return head;
    }
    if(cur1->next == cur2){
        prev1->next = cur2;
        cur1->next = cur2->next;
        cur2->next = cur1;
    }
    else if(cur2->next == cur1){
        prev2->next = cur1;
        cur2->next = cur1->next;
        cur1->next = cur2;
    }else{
        struct ListNode* after1 = cur1->next;
        struct ListNode* after2 = cur2->next;
        prev1->next = cur2;
        cur2->next = after1;
        prev2->next = cur1;
        cur1->next = after2;
    
    }
    return dummy.next;
    
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna