// Insert at the end of linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    // Constructor
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
int main()
{
Node* Head;
Node*Tail;
Tail=Head=NULL;


    int arr[]={2,4,6,8,10};
    //Insert at end
for(int i=0;i<=4;i++)
{
    // Linked List does not exist
    if(Head==NULL)
    {
        Head=new Node(arr[i]);
        Tail=Head;
    }
    
    // Linked List exists
    else{
        Tail->next=new Node(arr[i]);
        Tail=Tail->next;
    }
    
}
// printing Linked list
Node *temp;
temp=Head;
//que) why we create extra temp when we can traverse with Head also? or why we does not move with Head pointer
// ans)because it has one way
while(temp)

{
    cout<<temp->data<<" ";
    temp=temp->next;
}
}

// Do previous method by yourself in which i was traversing whole linked list


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//    Node *next=NULL;

//     // Constructor
//     Node(int value)
//     {
//       data=value;
//       next=NULL;
//     }
// };
// int main()
// {

//     Node*Head;
//     Head=NULL;

//     // Linked list does not exist
//     int arr[]={90,10,20,50,60};
//     for(int i=0;i<=4;i++)
//     {

//         if(Head==NULL)
//         {
//             Head=new Node(arr[i]);
//         }
//         else{
//             Node *Tail=Head;
//             while(Tail->next!=NULL)
//             {
//                 Tail=Tail->next;
//             }

//             Node *temp;
//             temp=new Node(arr[i]);
//             Tail->next=temp;
// //but time complexity of this code is very high as i know that i want to insert the node at end so why not i take a pointer which points to end.
//         }
//     }

//     // printing the linked list
//     Node *temp=Head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;

//     }

// }