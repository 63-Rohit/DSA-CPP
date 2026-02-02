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
Node *createDLL(int arr[],int index,int size,Node *back)
{
//   Base case
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
    int arr[]={20,26,30,40};
    head=createDLL(arr,0,4,NULL);
// Insert at any given position
    int pos=0;
//Edge case 1 Insert at start  
if(pos==0)  
{
  //Linked List does not exists
  if(head==NULL)
  {
    head=new Node(5);
  }
  
//   Linked List exists
else{
    Node *temp=new Node(5);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
}
else{
     
    Node *curr=head;
    // Go to the node after which i have to Insert
    while(pos--)
    {
        curr=curr->next;
    }
    //Edge case 2 Insert at end  
    if(curr->next==NULL)
    {
      Node *temp=new Node(5);
      temp->prev=curr;
      curr->next=temp;
    }
    //Insert at middle
    else{
        Node *temp=new Node(5);
        temp->next=curr->next;
        temp->prev=curr;
        curr->next=temp;
        temp->next->prev=temp;
    }
}


    // Print link list
   Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
return 0;

}