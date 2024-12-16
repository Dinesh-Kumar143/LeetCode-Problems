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
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *temp;
        ListNode *temp2;
        if (head == nullptr)
        {
            return nullptr;
        }
        else if (head->next == nullptr)
        {
            return head;
        }

        temp = curr;
        curr = curr->next;
        temp->next = curr->next;
        curr->next = temp;
        head = curr;
        curr = temp->next;
        while (curr != nullptr)
        {
            if (curr->next != nullptr)
            {
                temp2 = temp;
                temp = curr;
                curr = curr->next;
                temp->next = curr->next;
                curr->next = temp;
                temp2->next = curr;
                // temp2 =
                if (temp->next != nullptr)
                {
                    curr = temp->next;
                }
                else
                {
                    return head;
                }
            }
            else
            {
                return head;
            }
        }
        return head;
    }
};