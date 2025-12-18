// // recursive code for inserting a node at the end of Linked List
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;

//     // Constructor
//     Node(int x)
//     {
//         data=x;
//         next=NULL;
//     }
// };
// Node* createLinkedList(int arr[],int index,int size)
// {
//     // Base Case
//     if(index==size)
//     {
//         return NULL;
//     }

//     // Recursive call
//     Node *temp;
//     temp=new Node(arr[index]);
//  temp->next=createLinkedList(arr,index+1,size);
//  return temp;
// }
// int main()

// {

// Node *Head;
// Head=NULL;
   
// int arr[]={2,4,6,8,20};
// Head=createLinkedList(arr,0,5);
// }


#include<iostream>
using namespace std;

class Node{
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

// Function for linked list
Node* createLinkedList(int arr[],int index,int size)
{
    // Base case
    if(index==size)
    {
        return NULL;
    }
     Node*temp;
     temp=new Node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size);
    return temp;
}
int main()
{
    Node *Head;
    Head=NULL;
    int arr[]={10,12,15,18,20};
    // calling recursive function
    Head=createLinkedList(arr,0,5);

     // Print linked list
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}