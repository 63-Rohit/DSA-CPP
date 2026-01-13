// print the elements of array using recursion
#include<iostream>
using namespace std;
int arr[]={3,4,1,2,8};

void printarr(int arr[],int index,int n)
    {
        if(index==n)
        {
            return ;
        }
        
        
        cout<<arr[index]<<" ";
        // calling recursive function
        printarr(arr,index+1,n);
    }
    int main()
    {

        int arr[]={3,4,1,2,8};
       printarr(arr,0,5);
}