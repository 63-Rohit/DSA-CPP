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
    // Base case
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
    int arr[]={10,20,35,7,21};
    head=createDLL(arr,0,5,NULL);
   

    int pos=2;
    // Delete at start
    if(pos==1)
    {
      if(head->next==NULL)
      {
        delete head;
        head=NULL;
      }
      //if more than one node is present
      else{
        Node *temp=head;
        head=head->next;
        delete temp;
        head->prev=NULL;
      }

    }
    else {
    Node *curr = head;
    while(--pos)
    {
        curr = curr->next;
    }

    // Delete at last
    if(curr->next == NULL)
    {
        curr->prev->next = NULL;
        delete curr;
    }
    else {
        // Delete at middle
        Node* temp = curr;
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        delete temp;
    }
}



    // printing link list
    Node *temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }

}