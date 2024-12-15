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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        ListNode *dummy = new ListNode();
        dummy->next = head;
        if (dummy->next == nullptr)
        {
            return nullptr;
        }
        if (head->next == nullptr and n == 1)
        {
            delete head;
            return nullptr;
        }
        ListNode *curr = dummy;
        int i = 0;
        while (curr != nullptr)
        {
            i++;
            curr = curr->next;
        }
        i = i - n;
        int j = 1;
        curr = dummy;
        while (curr != nullptr && j < i)
        {
            curr = curr->next;
            j++;
        }
        if (curr != nullptr && curr->next != nullptr)
        {
            ListNode *todelete = curr->next;
            curr->next = todelete->next;
            todelete->next = nullptr;
            delete todelete;
        }

        return dummy->next;
    }
};