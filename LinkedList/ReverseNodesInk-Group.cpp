#include <bits/stdc++.h> 
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



Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
	if (n < 1 || head == NULL || head->next == NULL)
        return head;

    Node *prevPtr = NULL;
    Node *currPtr = head;
    Node *nextPtr = currPtr->next;

    int count = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    for (int i = 0; i < n; i++)
    {
        Node *last = prevPtr;
        Node *newHead = currPtr;

        int k = 0;

        if (b[i] == 0)
            continue;

        if (b[i] < count)
        {
            k = b[i];
            count -= b[i];
        }

        else
        {
            k = count;
            count -= k;
        }

        for (int j = 0; currPtr != NULL && j < k; j++)
        {
            currPtr->next = prevPtr;
            prevPtr = currPtr;
            currPtr = nextPtr;

            if (nextPtr != NULL)
                nextPtr = nextPtr->next;
        }

        if (last != NULL)
            last->next = prevPtr;

        else
            head = prevPtr;

        newHead->next = currPtr;
        prevPtr = newHead;

        if (count == 0)
            break;
    }

    return head;
}