class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        while(l1 != nullptr) {
            now -> next = new LIstNode( l1 -> val);
            L1 = L1 -> next;
            now = now -> next;
        }
        return ans -> next;
    }
};
