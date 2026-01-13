// Find the middle element  of a linked list

#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
 //Constructor
 
 Node(int value)
 {
    data=value;
    next=NULL;
 }
};

Node *createLinkedList(int arr[],int index,int size)
{
    // Base case
    if(index==size)
    {
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size);
    return temp;
}
int main()
{
  Node *Head=NULL;
  int arr[]={10,20,30,40,50};
  Head=createLinkedList(arr,0,5);
  Node *temp=Head;
  int count=0;

//   Count the number of nodes 
while(temp!=NULL)
{
    count++;
    temp=temp->next;
}
count=count/2;
// This is the no of steps i have to move
temp=Head;
while(count--)
{
    temp=temp->next;
}

// Printing middle element
cout<<"Middle element: "<<temp->data<<endl;

//   Print the link list
temp=Head;
cout<<"Linked List: ";
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
return 0;
}