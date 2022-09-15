/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* middleNode(ListNode *head)
        {
            int len = 0;
            ListNode *temp = head;
            while (temp != NULL)
            {
                len++;
                temp = temp->next;
            }
            if (len % 2 == 0)
                (len /= 2);
            else
                len /= 2;
            temp = head;
            while (len)
            {
                len--;
                temp = temp->next;
            }
            return temp;
        }
};