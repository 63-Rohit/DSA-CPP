// // Binary Search

// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[],int n,int key){
//     int low=0;
//     int high=n-1;
//     int mid;

//     while(low<=high)
//     {
//         mid=(low+high)/2;
    
//         if (arr[mid]==key)
//         {
//             return mid;
//         }
//         else if(arr[mid]<key){
//             low=mid+1;//Search right half
//         }
//         else{
//             high=mid-1;//Search left half
//         }
//     }
//     return -1;//Key not found
// }
// int main()
// {
//     int arr[1000];
//     int n;
//     cout<<"Enter the number of elements in an array: ";
//     cin>>n;
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter the key: ";
//     cin>>key;


// cout<< BinarySearch(arr,n,key);
// return 0;
// }


// Homework
// que) An array is given in decreasing order with key find the index of key,if key is not present print -1

#include<iostream>
using namespace std;

//Function for binary serach
int binarySearch(int arr[],int key,int n){
    int low=0;
    int high=n-1;
    int mid;

    while(low<=high)
    {
        mid=low+(high-low)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the number of array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key:";
    cin>>key;

    //Calling Binary serach function
cout<< 0binarySearch(arr,key,n);
return 0;

}