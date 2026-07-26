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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> v;
        ListNode *p=head;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        p=head;
        reverse(v.begin() + left - 1, v.begin() + right);
        int i = 0;
        while (p) {
            p->val = v[i++];
            p = p->next;
        }
        return head;
    }
};