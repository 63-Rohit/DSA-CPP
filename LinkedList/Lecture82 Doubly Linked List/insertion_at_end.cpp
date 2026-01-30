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
int arr[]={1,2,3,4};
for(int i=0;i<4;i++)
{

    // Linked List does not exists
    if(head==NULL)
    {
        head=new Node(arr[i]);
    }
    else{

        //Linked list exists
        Node *tail=head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        Node *temp=new Node(arr[i]);
        tail->next=temp;
        temp->prev=tail;
    }

}
    // printing link lists
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// Time Complexity: O(n²), because for each insertion we traverse the linked list to reach the last node.
// Space Complexity: O(1) auxiliary space (O(n) including linked list nodes).