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
    // Base Case
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
    int arr[]={1,2,3,4};
    head=createDLL(arr,0,4,NULL);
    int x=3;
    Node *temp=head;
    while(x--)
    {
       temp=temp->next;
    }
    Node *temp2=new Node(5);
    temp2->next=temp->next;
    temp2->prev=temp;
    temp->next=temp2;
    temp->next->prev=temp;


    //  print link list
temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
}