

#include<iostream>
using namespace std;
class Node{
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
    
// we can find the middle element of a link using without traversing the whole linked list twice 
// By slow and fast pointer

Node *slow=Head;
Node *fast=Head;

while(fast != NULL && fast->next != NULL)
{
    slow=slow->next;
    fast=fast->next->next;
}
   cout<<"Middle element of a linked list: "<<slow->data<<endl;

    // Print link list
    Node *temp=Head;
    cout<<"Linked List: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}