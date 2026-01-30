// Alternate method for insertion at end
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    // Constructor
    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        // Linked List exists
        if (head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        else
        {
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail=temp;
        }
    }

        // printing link list
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
}

// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary space (O(n) including linked list nodes)