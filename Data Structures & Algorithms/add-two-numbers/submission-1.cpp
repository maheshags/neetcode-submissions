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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        int carry=0;
        ListNode*newlist=new ListNode(0);
        ListNode*curr=newlist;
        while(temp1!=nullptr||temp2!=nullptr){
            int x,y;
            if(temp1!=nullptr) x=temp1->val;
            else x=0;
            if(temp2!=nullptr) y=temp2->val;
            else y=0;

            int sum=carry+x+y;
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;

            if(temp1)temp1=temp1->next;
            if(temp2)temp2=temp2->next;

            

        }
        if(carry>0)curr->next=new ListNode(carry);
        return newlist->next;
    }
};
