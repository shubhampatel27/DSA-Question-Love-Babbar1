#include<bits/stdc++.h> 
using namespace std;



    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };



void reverse (LinkedListNode<int>* &head,LinkedListNode<int>* &prev,LinkedListNode<int>* &curr) {

    

       if(head==NULL){

           return;

       }

        while(curr != NULL){

            LinkedListNode<int>* forward = curr->next;

            curr->next =prev;

            prev=curr;

            curr=forward;

 

        }

        

    }

 

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 

{

    LinkedListNode<int>* prev=NULL;

    LinkedListNode<int>* curr=head;

    reverse(head,prev,curr);

    return prev;

    

}