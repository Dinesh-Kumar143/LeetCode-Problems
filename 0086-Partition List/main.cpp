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
class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {
        // ListNode* merged;
        ListNode *Merged = new ListNode(-1);
        ListNode *Mcurr = Merged;

        ListNode *curr = head;

        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        while (curr != nullptr)
        {
            if (curr->val < x)
            {
                ListNode *node = new ListNode(curr->val);
                Mcurr->next = node;
                Mcurr = Mcurr->next;
            }
            curr = curr->next;
        }
        curr = head;
        while (curr != nullptr)
        {
            if (curr->val >= x)
            {
                ListNode *node = new ListNode(curr->val);
                Mcurr->next = node;
                Mcurr = Mcurr->next;
            }
            curr = curr->next;
        }

        return Merged->next;
    }
};