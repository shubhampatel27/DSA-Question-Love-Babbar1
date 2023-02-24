#include <bits/stdc++.h> 
using namespace std;

    // Following is the class structure of the LinkedListNode class:

    template <typename T>ß
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


LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
  if (head == NULL || K == 0) {
        return head;
    }
     LinkedListNode<int>* start = new LinkedListNode<int>(0);
    start->next = head;
    LinkedListNode<int>* slow= start;
    LinkedListNode<int>* fast = start;

    for(int i = 1; i<=K; i++){
        fast= fast->next;
    }
    while(fast->next !=NULL){
                fast= fast->next;
                slow = slow->next;

    }
        slow->next = slow->next->next;
        return start->next;

}