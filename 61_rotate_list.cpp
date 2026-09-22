/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> values;                     //All in
        ListNode* curr = head;
        while (curr != nullptr) {
            values.push_back(curr->val);
            curr = curr->next;
        }

        int n = values.size();
        k = k % n;
        std::rotate(values.rbegin(), values.rbegin() + k, values.rend());
    
        curr = head;                               //Back to nodes
        for (int val : values) {
            curr->val = val;
            curr = curr->next;
        }


        return head;
    }
};