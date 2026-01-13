// //Deleting first node from a linked List

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    // Constructor
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
           Node *Head;
           Head=NULL;
        
           int arr[]={2,4,6,1,7};
        
           Head=createLinkedList(arr,0,5);
          
        //    Delete a node at start
           if(Head!=NULL)
          {
                    Node *temp=Head;
                    Head=Head->next;//Head k andar Head ke next ki value daldo
                    delete temp;
            }
            
            // printing Linked list
             while(Head!=NULL)
             {
                cout<<Head->data<<" ";
                Head=Head->next;
             }
        }
  

