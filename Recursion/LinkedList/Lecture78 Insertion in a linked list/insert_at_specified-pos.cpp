// Insert the node at specified/particular position in a linked list.

// Insert the node at specified/particular position in a linked list.

#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *createLinkedList(int arr[], int index, int size)
{
    if(index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = createLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{
    Node *Head = NULL;

    int arr[] = {2,4,6,8,10};
    Head = createLinkedList(arr, 0, 5);

    int x = 1;        // Insert Position (try 1 or 3)
    int value = 30;

    // 🔹 CASE 1: INSERT AT START
    if(x == 1)
    {
        Node *temp2 = new Node(value);
        temp2->next = Head;
        Head = temp2;
    }
    else
    {
        Node *temp = Head;
        x--;

        while(x-- && temp != NULL)
        {
            temp = temp->next;
        }

        Node *temp2 = new Node(value);
        temp2->next = temp->next;
        temp->next = temp2;
    }

    // Print the linked list
    Node *temp = Head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


// que) What is the advantage of using Linked list over Array
// linked list is dynamic in nature it cant grow its size easily whereas array cant but using vector it can be done.No wastage of MEMEORY IN LINK LIST IS THERE.
// Hw do it with recursion

// Suppose e xample you made a website and thnk 100 will user will come and you have taken array and only 10 user comes in website so 90 get wastage whereas in linked list jitni requirement utnada data consume.