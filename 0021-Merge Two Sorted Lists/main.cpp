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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *merged = new ListNode();
        ListNode *curr = merged;
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val <= list2->val)
            {
                ListNode *node = new ListNode(list1->val);
                curr->next = node;
                curr = node;
                list1 = list1->next;
            }
            else if (list2->val <= list1->val)
            {
                ListNode *node = new ListNode(list2->val);
                curr->next = node;
                curr = node;
                list2 = list2->next;
            }
        }
        while (list1)
        {
            ListNode *node = new ListNode(list1->val);
            curr->next = node;
            curr = node;
            list1 = list1->next;
        }
        while (list2)
        {
            ListNode *node = new ListNode(list2->val);
            curr->next = node;
            curr = node;
            list2 = list2->next;
        }

        return merged->next;
    }
};