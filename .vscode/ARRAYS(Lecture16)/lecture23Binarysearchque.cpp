#include<iostream>
using namespace std;

    int binarySearch(int arr[],int n,int key){
        int low=0;
        int high=n-1;
        int mid;
        int first,last=-1;

        //Find first
     while(low<=high)
     {
        if(arr[mid]==key)
        {
          return mid;
          first=mid;
          low=mid-1;
          
        }

        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid+1;
        }


        //Find last
        while(low<=high)
     {
        if(arr[mid]==key)
        {
          return mid;
          last=mid;
          high=mid+1;

        }

        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid+1;
        }
        return -1;
    }
}
    }
 int main()
 {
    int arr[5]={2,4,8,12,14};
 }