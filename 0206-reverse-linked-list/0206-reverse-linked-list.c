/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
   struct ListNode* prev = NULL;
   struct ListNode* cur = head;
   struct ListNode* next = NULL;
   while(cur!=NULL){
    next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = next;
   }
   return prev;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna