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
    ListNode* addTwoNumbers(ListNode* temp1,ListNode* temp2) {
        ListNode* dummy=new ListNode(0);
        ListNode* temp3=dummy;
        int carry=0;

        while(temp1!=NULL || temp2!=NULL) {
            int val1=0;
            int val2=0;

            if(temp1!=NULL)
                val1=temp1->val;

            if(temp2!=NULL)
                val2=temp2->val;

            temp3->next=new ListNode(val1+val2+carry);
            temp3=temp3->next;

            if(temp3->val>9) {
                temp3->val=temp3->val%10;
                carry=1;
            }
            else {
                carry=0;
            }

            if(temp1!=NULL)
                temp1=temp1->next;

            if(temp2!=NULL)
                temp2=temp2->next;
        }

        if(carry==1)
            temp3->next=new ListNode(1);

        return dummy->next;
    }
};