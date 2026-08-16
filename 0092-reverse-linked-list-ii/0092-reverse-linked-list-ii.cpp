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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*temp=head;
        ListNode*prev=NULL;
        ListNode*front;
        ListNode*pf=NULL;
        ListNode*gd;
        int i=1;
        while(i<left){
            prev=temp;
            temp=temp->next;
            i++;
        }
        gd=temp;
        while(i<=right){
            front=temp->next;
            temp->next=pf;
            
            pf=temp;
            temp=front;
            i++;
        }
        if (prev != NULL)
        prev->next = pf;
    else
        head = pf;   // left == 1 case

    gd->next = temp;

    return head;

    }
};