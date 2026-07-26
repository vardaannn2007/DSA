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
    void reorderList(ListNode* head) {
        vector<int> v;
        ListNode* p = head;
        while (p) {
            v.push_back(p->val);
            p = p->next;
        }
        vector<int> ans;
        int i = 0, j = v.size() - 1;
        while (i <= j) {
            if (i == j)
                ans.push_back(v[i++]);
            else {
                ans.push_back(v[i++]);
                ans.push_back(v[j--]);
            }
        }
        p = head;
        int k = 0;
        while (p) {
            p->val = ans[k++];
            p = p->next;
        }
    }
};