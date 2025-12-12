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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode * mid = head;
        int cnt =0;
        while(temp)
        {
            cnt++;
            temp = temp->next;
        }
        int cnt2 = 0;
        if(cnt%2==0)
        {
            while(cnt2<cnt/2)
            {   cnt2++;
                mid = mid-> next; 
            }
        }
        else if (cnt%2==1)
        {
            while(cnt2< (cnt/2))
            {
                cnt2++;
                mid= mid->next;
            }
        }
        return mid;

    }
};