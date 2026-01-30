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
Node *createLinkedList(int arr[],int index,int size,Node *back)
{
    // base case
    if(index==size)
    {
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->prev=back;
    temp->next=createLinkedList(arr,index+1,size,temp);
    return temp;
}
int main()
{
    Node *head=NULL;
    int arr[]={10,20,21,15,45};
    head=createLinkedList(arr,0,5,NULL);


    // print link list
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

// Time Complexity: O(n)
// Space Complexity: O(n) (due to recursion stack and linked list nodes)