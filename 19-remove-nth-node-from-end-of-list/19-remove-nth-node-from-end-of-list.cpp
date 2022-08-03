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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // ListNode*data =n ;
        // int*next;
          if(head ==NULL)
        {
            return head;
         }
        ListNode * curr = head;
     
        int count = 0;
       while(curr!=NULL)
       {
           curr=curr->next;
           count++;
        }
        int len = count-n;
            if(count == n) return head -> next   ;
              
        else
              {
        int i=1;
    for(curr=head;i<len;i++)
    {
        curr=curr->next;
    }
       curr->next=curr->next->next;
              }
        return head;
        
    }
};