/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return false;
        }

        std::set<ListNode *> visited;
        ListNode *curr = head;

        while (curr)
        {
            if (visited.find(curr) != visited.end())
            {
                return true;
            }

            visited.insert(curr);
            curr = curr->next;
        }

        return false;
    }
};