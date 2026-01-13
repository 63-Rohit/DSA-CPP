// Insert the node at specified/particular position in a linked list.

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
// Constructor
Node(int value)
{
    data=value;
    next=NULL;
}
};


int main()
{
    Node *Head;
    Head=NULL;

    int arr[]={2,4,6,8};
    Node=createLinkedList(arr,0,5);
    for(int i=0;i<4;i++)
    {

    }
// Insert Node at particular position
int x=3;//Insert Position
int value=30;

Node *temp=Head;
x--;

while(x--)
{
    temp=temp->next;
}
// Print the linked list
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
};

Node *temp2=new Node(value);
temp2->next=temp->next;
temp->next=temp2;

}

// que) What is the advantage of using Linked list over Array
// Hw do it with recursion