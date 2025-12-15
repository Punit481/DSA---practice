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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* temp = head;
        ListNode* front;
        while(temp)
        {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;
        ListNode* newHead = reverseList(head);
        ListNode* temp = newHead;
        if(n==1)
        {
            newHead = temp->next;
            temp = reverseList(newHead);
            return temp;
        }
        temp = newHead;
        int i = 0;
        ListNode* prev =nullptr;
        while(temp)
        {
            i++;
            if(i==n)
            {
                prev->next = temp->next;
                break;
            }
            prev = temp;
            temp = temp->next;
        }

        temp = reverseList(newHead);

        return temp;
    }
};