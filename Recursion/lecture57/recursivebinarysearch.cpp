#include<iostream>
using namespace std;
bool binarySearch(int arr[],int low,int high,int key)
{
//   Base Case
if(low>high)
{
    return 0;
}


int mid=low+(high-low)/2;
if(arr[mid]==key)
{
    return 1;
}
else if(arr[mid]<key)
{
  return binarySearch(arr,mid+1,high,key);

}
else{
   return binarySearch(arr,low,mid-1,key);
}

}
int main()
{
int arr[]={2,4,6,8,10,12};
int key=20;
// callinf binarysearch function
cout<<binarySearch(arr,0,5,key);
}