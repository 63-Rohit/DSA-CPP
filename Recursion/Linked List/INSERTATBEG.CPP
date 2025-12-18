#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    Node* Head = NULL;  // Empty linked list at the start

    int arr[] = {2, 4, 6, 8, 10};

    for (int i = 0; i < 5; i++) {
        // Insert node at beginning
        Node* temp = new Node(arr[i]);
        temp->next = Head;
        Head = temp;
    }

    // Print the linked list
    Node* temp = Head;
    cout << "Linked List elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
    return 0;
}
