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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *todelete;
        if (head == nullptr)
        {
            return nullptr;
        }
        else if (head->next == nullptr)
        {
            return head;
        }
        while (curr->next != nullptr)
        {
            while (curr->val == curr->next->val)
            {
                todelete = curr->next;
                curr->next = todelete->next;
                delete todelete;
                if (curr->next == nullptr)
                {
                    return head;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};