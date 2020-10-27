/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=NULL;
        int sum=0;
        ListNode **temp=&l3;
        int k=0;
        while(l1!=NULL||l2!=NULL||sum>0){
            if(l1){
                sum=l1->val+sum;
                l1=l1->next;
            }
            if(l2){
                sum=l2->val+sum;
                l2=l2->next;
            }
            (*temp)=new ListNode(sum%10);
            sum/=10;
            temp=&((*temp)->next);   
        }
        return l3;
    }
};