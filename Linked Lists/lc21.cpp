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
//https://leetcode.cn/problems/merge-two-sorted-lists/description/?envType=study-plan-v2&envId=top-100-liked
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p = list1;
        ListNode* q = list2;
        ListNode* now = NULL;
        ListNode* ans=NULL;
        if(p==NULL&&q==NULL)return list1;
        else if(p==NULL&&q!=NULL)return list2;
        else if(p!=NULL&&q==NULL)return list1;
        else{
            if(p->val>=q->val)list1 = list2;
            else list2 = list1;
        }

        while(p!=NULL&&q!=NULL)
        {
            if(p->val<q->val)
            {
                now = p;
                p = p->next;
            }
            else{
                now = q;
                q = q->next;
            }
            if(ans==NULL)
            {
                ans = now;
            }
            else{
                ans->next = now;
                ans = ans->next;
            }
        }
        while(p!=NULL)
        {
            ans->next = p;
            ans = ans->next;
            p = p->next;
        }
        while(q!=NULL)
        {
            ans->next = q;
            ans = ans->next;
            q = q->next;
        }
        return list1;
        
    }
};
