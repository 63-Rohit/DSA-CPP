// // Code for inserting Node at the end of Linked List
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
//   Recursive function for inserting node at the end of linked list
Node *createLinkedList(int arr[],int index,int size)
{
    // Base Case
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
    
    int arr[]={18,29,32,11};
    
    // Calling recursive function
    Head=createLinkedList(arr,0,4);
    // Print Linked List
    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node *next;

//     // Constructor
//     Node(int value)
//     {
//         data=value;
//         next=NULL;
//     }

// };
//     Node *createLinkedList(int arr[],int index,int size)
//     {
//         // Base Case
//         if(index==size)
//         {
//             return NULL;
//         }
//       Node *temp=new Node(arr[index]);
//       temp->next=createLinkedList(arr,index+1,size);
//       return temp;
//     }
//     int main()
//     {
        
//         Node *Head=NULL;
//         int arr[]={10,20,21,14};
//         Head=createLinkedList(arr,0,4);

//         // print liked list
//         Node *temp=Head;
//         while(temp)
//         {
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     }


