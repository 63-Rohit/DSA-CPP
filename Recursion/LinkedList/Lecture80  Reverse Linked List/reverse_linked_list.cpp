#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
//    Constructor 
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
  Node *temp=head;
 int arr[]={1,2,3,4,5};
 head=createLinkedList(arr,0,5);

vector<int>ans;
temp=head;
// Traversing link list
while(temp!=NULL)
{
    ans.push_back(temp->data);
    temp=temp->next;
}

int i=ans.size()-1;
temp=head;
// Now Traversing from size-1 to 0 index
while(temp)
{
    temp->data=ans[i];
    i--;
    temp=temp->next;
}

//  Print link list
temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}

}