
#include<bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
  struct ListNode {
      int val;
    ListNode *next;
     ListNode() : val(0), next(NULL) {}
     ListNode(int x) : val(x), next(NULL) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1){
            return head;
        }
       ListNode * dummy= new ListNode(0);
       dummy->next = head;

       ListNode * curr = dummy, *nex=dummy , *prev = dummy;

       int count =0;
       while(curr->next !=NULL){
           curr = curr->next;
           count++;
       }
       while(count >= k){
           curr = prev->next;
           nex = curr->next;
           for(int i =1; i<k; i++){
               curr->next= nex->next;
               nex->next = prev->next;
               prev->next = nex;
               nex = curr->next;
           }
           prev=curr;
           count -=k;
       }
       return dummy->next;
    }
};