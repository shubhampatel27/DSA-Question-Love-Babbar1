#include <bits/stdc++.h> 
using namespace std;

    Following is the class structure of the Node class:

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

bool detectCycle(Node *head)
{
	//	Write your code here

	if(head==NULL) return false;

	Node * fast = head;
	Node * slow = head;

	while(fast !=NULL && fast->next !=NULL){
		fast = fast->next->next;
		slow = slow->next;
		if(slow==fast) return true;
	}
	return false;
}
