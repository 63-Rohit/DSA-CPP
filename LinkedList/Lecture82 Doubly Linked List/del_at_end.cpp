#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *prev;
    Node *next;
    //Constructor
    Node(int value) 
    {
        data=value;
        prev=NULL;
        next=NULL;
    }
};

Node *createDLL(int arr[],int index,int size,Node *back)
{
    // base Case
    if(index==size)
    {
        return NULL;
    }

    Node *temp=new Node(arr[index]);
    temp->prev=back;
    temp->next=createDLL(arr,index+1,size,temp);
    return temp;
}
int main()
{
  Node *head=NULL;
  int arr[]={10,20,30,40,50};
  head=createDLL(arr,0,5,NULL);

//   deletion at the end of doubly lik list

//Linked list should exists
if(head!=NULL)
{
//Edge case if only one node is present
if(head->next==NULL)
{
    delete head;
    head=NULL;
}
// more than one node is present
else{

    Node *tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->prev->next=NULL;
    delete tail;
}
}

//   Printing link list
  Node *temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}