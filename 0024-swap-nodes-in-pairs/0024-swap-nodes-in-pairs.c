/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* prev = &dummy;
    if(head == NULL || head->next == NULL){
        return head;
    }
    while(prev->next != NULL && prev->next->next != NULL){
        struct ListNode* cur = prev->next;
        struct ListNode* next = cur->next;
        cur->next = next->next;
        next->next = cur;
        prev->next = next;
        prev = cur;

    }
    return dummy.next;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna