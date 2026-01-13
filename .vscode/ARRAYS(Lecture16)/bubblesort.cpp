#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               int temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
            }
        }
    }

    // printing array elements
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

/*

1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.

2: Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last. Question was explained in the class.

3: Bubble Sort Algorithm to sort the array of char in ascending order.



*/


