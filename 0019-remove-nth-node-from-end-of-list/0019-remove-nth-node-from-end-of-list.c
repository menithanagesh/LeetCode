/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp = head;
    struct ListNode* cur = head;
    struct ListNode* prev = NULL;
    int count =0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    int pos = count - n;
    if(pos == 0){
        head = head->next;
        free(cur);
        return head;
        
    }
    for(int i=0;i<pos;i++){
        prev = cur;
        cur = cur->next;
    }
    prev->next = cur->next;
    return head;

}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna