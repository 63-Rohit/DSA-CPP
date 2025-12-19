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

Node *createLinkedList(int arr[],int index,int size,Node *prev)
{
    // Base Case
    if(index==size)
    {
        return prev;
    }

Node *temp=new Node(arr[index]);
temp->next=prev;
// Function call
return createLinkedList(arr,index+1,size,temp);
}
int main()
{
    Node *Head;
    Head=NULL;

    int arr[]={2,4,6,8,10};
    Head=createLinkedList(arr,0,5,Head);

    // print the linked list
    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}