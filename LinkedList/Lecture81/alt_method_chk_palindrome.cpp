// Alternate method for checking lik list is palindrome or not by without taking any extra space.

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
    Node *head=NULL;
    int arr[]={1,2,3,3,2,1};
    head=createLinkedList(arr,0,6);

    // count the total number of nodes
    int count=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    count=count/2;
    Node *curr=head;
    Node *prev=NULL;
// Skip number of nodes
    while(count--)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;


    // Now reversing the link list
    prev=NULL;
    Node *fut=NULL;
    while(curr)
    {
        fut=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fut;
    }
     Node *head1=head;
     Node *head2=prev;
     while(head1)
     {
        if(head1->data!=head2->data)
        {
            cout<<"not palindrome";
        }
        head1=head1->next;
        head2=head2->next;
     }
     cout<<"Palindrome\n";
    // printing link list
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
return 0;
}


// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// Node *createLinkedList(int arr[], int index, int size)
// {
//     if(index == size)
//         return NULL;

//     Node *temp = new Node(arr[index]);
//     temp->next = createLinkedList(arr, index + 1, size);
//     return temp;
// }

// int main()
// {
//     int arr[] = {1,2,3,3,2,1};
//     Node *head = createLinkedList(arr, 0, 6);

//     // 1️⃣ Find middle (slow-fast method)
//     Node *slow = head;
//     Node *fast = head;

//     while(fast && fast->next)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     // 2️⃣ Reverse second half
//     Node *prev = NULL;
//     Node *curr = slow;
//     Node *fut = NULL;

//     while(curr)
//     {
//         fut = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = fut;
//     }

//     // 3️⃣ Compare both halves
//     Node *head1 = head;
//     Node *head2 = prev;

//     while(head2)
//     {
//         if(head1->data != head2->data)
//         {
//             cout << "Not Palindrome\n";
//             return 0;
//         }
//         head1 = head1->next;
//         head2 = head2->next;
//     }

//     cout << "Palindrome\n";
//     return 0;
// }
