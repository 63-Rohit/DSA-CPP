#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node* createLinkedList(int arr[], int index, int size)
{
    if(index == size)
        return NULL;

    Node* temp = new Node(arr[index]);
    temp->next = createLinkedList(arr, index + 1, size);
    return temp;
}

int main()
{
    int arr[] = {1,2,3,3,2,1};
    Node* head = createLinkedList(arr, 0, 6);

    vector<int> v;
    Node* temp = head;

    // Step 1: Store linked list in vector
    while(temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }

    // Step 2: Two pointer check
    int i = 0;
    int j = v.size() - 1;
    bool isPalindrome = true;

    while(i < j)
    {
        if(v[i] != v[j])
        {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome)
        cout << "Palindrome Linked List";
    else
        cout << "Not a Palindrome Linked List";

    return 0;
}
//  but taking extra array so time complexity is
// ⏱️ COMPLEXITY (EXAM READY)

// Time: O(n)

// Space: O(n)