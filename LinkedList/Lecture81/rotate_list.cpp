// 🔷 QUESTION 

// Rotate a singly linked list to the right by k positions.

// Example
// Input list : 1 → 2 → 3 → 4 → 5 → 6
// k = 2

// Output list: 5 → 6 → 1 → 2 → 3 → 4


// Meaning: last k nodes come to the front.



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
    // Base  Case
    if(index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = createLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{
    int k = 2;
    Node *head = NULL;
    int arr[] = {1,2,3,4,5,6};

    head = createLinkedList(arr, 0, 6);

    int count = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    k = k % count;
    if(k == 0)
        return 0;

    count = count - k;

    Node *curr = head;
    Node *prev = NULL;

    while(count--)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;

    Node *tail = curr;
    while(tail->next != NULL)
        tail = tail->next;

    tail->next = head;
    head = curr;

    // Print rotated list
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
