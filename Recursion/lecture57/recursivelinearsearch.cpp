// Lecture  57 Recursion in Linear And Binary Search
#include<iostream>
using namespace std;

// Linear search function
bool linearSearch(int arr[],int key,int index,int N)
{
    // Base case
    if(index==N)
    {
        return 0;
    }

    if(arr[index]==key)
    {
        return 1;
    }
    // Recursive function call
  return  linearSearch(arr,key,index+1,N);
}
int main()
{
    int arr[]={2,3,5,6,7,8,10};
    int key=8;
    // Function call
cout<< linearSearch(arr,key,0,6);

}
