// Delete a node at last
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

//  Constructor
Node (int value)
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

    Node *Head;
    Head=NULL;

         int arr[]={2,4,6,1,7};
        Head=createLinkedList(arr,0,5);


    // Delte a node at last
    if(Head!=NULL)
    {
        // only 1 node is present
     if(Head->next==NULL)
     {
        // Node *temp=Head;
        // delete temp;
        delete Head;
        Head=NULL;
     }

        // more than one node is present
        else{
            Node *curr=Head;
            Node *prev=NULL;

        // curr->next is not NULL
            while(curr->next!=NULL)
            {
                prev=curr;//current k andar prev k value daldo
                curr=curr->next;
            }
            delete curr;
            prev->next=NULL;
        }
    }
     // printing Linked list
             while(Head!=NULL)
             {
                cout<<Head->data<<" ";
                Head=Head->next;
             }
}