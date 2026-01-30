#include<iostream>
using namespace std;

    class Node
    {
        public:
        int data;
        Node *next;
        Node *prev;
 //Constructor
 Node(int value) 
 {
    data=value;
    next=NULL;
    prev=NULL;
 }
};

int main()
{
    Node *head=NULL;
    int arr[]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        // Linked List does not exists
        if(head==NULL)
        {
            head=new Node(arr[i]);
        }
        // Linked List exists
        else{
            Node *temp=new Node(arr[i]);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
    }
        // Printing link list
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}

// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary space (O(n) including linked list nodes)