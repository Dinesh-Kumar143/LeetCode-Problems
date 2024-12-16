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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *merged = new ListNode();
        ListNode *curr = merged;

        while (true)
        {
            int minIndex = -1;
            int minValue = INT_MAX;

            for (int i = 0; i < lists.size(); i++)
            {
                if (lists[i] != nullptr && lists[i]->val < minValue)
                {
                    minValue = lists[i]->val;
                    minIndex = i;
                }
            }
            if (minIndex == -1)
                break;

            curr->next = new ListNode(minValue);
            curr = curr->next;

            lists[minIndex] = lists[minIndex]->next;
        }

        return merged->next;
    }
};
