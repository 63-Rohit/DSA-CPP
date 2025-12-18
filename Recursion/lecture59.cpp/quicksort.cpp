#include<iostream>
using namespace std;
// Partition function
int partition(int arr[],int start,int end)
{
    int pos=start;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
        return pos-1;
    }
    // Quick sort function
    void quickSort(int arr[],int start,int end )
    {
        // Base case
        if(start>=end)
        {
            return;
        }
        int pivot=partition(arr,start,end);
        // Left side
        quickSort(arr,start,pivot-1);
        // Right isde
        quickSort(arr,pivot+1,end);
    }


int main()
{
    int arr[]={2,13,12,11,24,122,78};
    // calling quicksort function
    quickSort(arr,0,6);
    for(int i=0;i<=6;i++)
    {
        cout<<arr[i]<<" ";
    }
}