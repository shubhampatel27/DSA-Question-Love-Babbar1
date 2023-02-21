#include<bits/stdc++.h>
using namespace std;
//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(NULL) {}
     ListNode(int x) : val(x), next(NULL) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        int carry =0;
        while(l1 !=NULL || l2 !=NULL || carry !=NULL){
            int sum =0;
            if(l1 !=NULL){
                sum += l1->val;
                l1= l1->next;
        }
         if(l2 !=NULL){
                sum += l2->val;
                l2= l2->next;
        }

        sum += carry;
        carry = sum/10;
        ListNode* node1 = new ListNode(sum%10);
        temp->next = node1;
        temp  = temp->next;
    } return dummy->next;
  }
};

// little changes in the code


    // Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
	        Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };



Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Write your code here.
    Node * dummy = new Node (0);
    Node * temp = dummy;
    int carry = 0;
    while(head1 !=NULL || head2 !=NULL || carry !=0){
        int sum =carry;
        if(head1 !=NULL){
            sum += head1->data;
            head1= head1->next;
        }
        if(head2 !=NULL){
            sum += head2->data;
            head2 = head2->next;
        }
       
        carry = sum/10;
        Node* node1 = new Node(sum%10);
        temp->next = node1;
        temp = temp->next;
    }
    temp->next = NULL;
    return dummy->next;
}
