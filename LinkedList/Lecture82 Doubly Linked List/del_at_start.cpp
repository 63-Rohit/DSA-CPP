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
    temp->next=createDLL(arr,index+1,size,temp);
    temp->prev=back;
    return temp;
}
int main()
{
    Node *head=NULL;
    int arr[]={10,20,30,40};
    head=createDLL(arr,0,4,NULL);
// Deletion at start of a doubly link list
 if(head!=NULL)
 {
    //if only one node exists
    if(head->next==NULL)
    {
        delete head;
        head=NULL;
    }
    // if more than one node exists
    Node *temp=head;
    head=head->next;
    delete temp;
    // if(head)
    // {
    //     head->prev=NULL;
    // }
 }
    // Print link list
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}