#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
 //Constructor
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

    vector<int>ans;
    Node *temp=head;
    while(temp!=NULL)
    {
        ans.push_back(temp->data);
        temp=temp->next;
    }
    int i=0;
    int j=ans.size()-1;
    while(i<j)
    {
        if(ans[i]!=ans[j])
        {
            cout<<"Not palindrome";
            return 0;
        }
       else if(ans[i]==ans[j])
       {
         i++;
         j--;
       }
    }
    cout<<"List is palindrome\n";
    // Print link list
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}