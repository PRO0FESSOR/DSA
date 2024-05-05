
// 237. Delete Node in a Linked List

// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         // Overwrite data of next node on current node.
//         node->val = node->next->val;
//         // Make current node point to next of next node.
//         node->next = node->next->next;
//     }
// };