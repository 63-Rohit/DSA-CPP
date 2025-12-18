// // // Insert the node at beginning

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;
//     // Constructor
//     Node(int value)
//     {
//         data=value;
//         next=NULL;
//     }
// };
// int main()
// {
//     // Static way
//     // Node A1(4);

//     // Dynamic way
//     Node *Head;
//     Head=NULL;

    
//     int arr[]={2,4,6,8,10};
//     for(int i=0;i<5;i++)
//     {
//         // Linked list does not exist

//         if(Head==NULL)
//         {
//             Head=new Node(arr[i]);
//         }
        
        
//         // Linked List exists
//         else{
//             Node *temp;
//         temp=new Node(arr[i]);
//         temp->next=Head;
//         Head=temp;
//     }
//     }

//     // Print the value
// Node *temp=Head;
// while(temp!=NULL)
// {
//     cout<<temp->data<<" ";
//     temp=temp->next;
// }
// }



// Insertion at starting of a linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;


    // Constructor
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
int main()
{

// Static way
// Node A1;
// A1.data=4;
// A1.next=NULL;

// Dynamic way

Node*Head;
Head=NULL;

int arr[]={10,11,12,13,14,15};
for(int i=0;i<=5;i++)
{

    // If linked list does not exist
    if(Head==NULL)
    {
        Head=new Node(arr[i]);
    }
    else{
        Node*temp;
        temp=new Node(arr[i]);
        temp->next=Head;
        Head=temp;
    }
}

// Print the linked list
Node *temp=Head;
while(temp!=NULL)
{
   cout<<temp->data<<" ";
   temp=temp->next;

}
}