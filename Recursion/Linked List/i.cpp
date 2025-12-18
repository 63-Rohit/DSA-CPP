// Insertion at starting of  a linked list

#include<iostream>
using namespace std;

class Node{
public:
int data;
Node*next;

// Constructor
Node(int value)
{
    data=value;
    next=NULL;
}
};
int  main()
{
    Node*Head;
    Head=NULL;

    // If linked list does not exist
    int arr[]={29,32,12,15,17};
    for(int i=0;i<=4;i++)
    {

        if(Head==NULL)
        {
            Head=new Node(arr[i]);
        }
        else{
            Node *temp;
            temp=new Node(arr[i]);
            temp->next=Head;
            Head=temp;
        }
    }
        // Printing the linked list
        Node *temp=Head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}


