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
        if (!head) return head;
        
        vector<int> values;                     //All in
        ListNode* curr = head;
        while (curr != nullptr) {
            values.push_back(curr->val);
            curr = curr->next;
        }

        int n = values.size();
        if (k == 0) return head;
        k = k % n;
        std::rotate(values.begin(), values.end() - k, values.end());   

        curr = head;                               //Back to nodes
        for (int val : values) {
            curr->val = val;
            curr = curr->next;
        }


        return head;
    }
};