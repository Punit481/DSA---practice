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
    ListNode* reverseList(ListNode* temp)
    {
        ListNode* prev = nullptr;
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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = slow;

        while(fast->next!=nullptr && fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* newHead = reverseList(slow->next);
        slow = head;
        while(newHead!=nullptr)
        {
            if(slow->val!= newHead -> val) return false;

            slow= slow->next;
            newHead = newHead->next;
        }
        newHead = reverseList(slow->next);
        return true;
    }
};