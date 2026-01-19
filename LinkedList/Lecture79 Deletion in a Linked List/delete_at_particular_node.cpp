// Delete at particular node
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

Node *createLinkedList(int arr[],int index,int size)
{
   Node *temp=new Node(arr[index]);
   temp->next=createLinkedList(arr,index+1,size);
}
    int main()
{
    Node *Head;
    

}