// print elements of array using recursion idf index is from starting
// #include<iostream>
// using namespace std;
// // indexing is from starting
// void print(int arr[],int index,int n )
// {
//     // Base case
//     if(index==n)
//     {
//         return;
//     }
// cout<<arr[index]<<" ";
// // calling recursive function
// print(arr,index+1,n);
    
// }
// int main()
// {
    
//     int arr[]={1,4,5,6,7};
//     // function call
//     print(arr,0,5);

// }




//Print elements of array using recursion if indexing is from lasting
#include<iostream>
using namespace std;
void print(int arr[],int index)
{
    // Base Case
    if(index==-1)
    {
        return ;
    }

    // recursive call
    print(arr,index-1);

    
    cout<<arr[index]<<" ";

}
int main()
{
    int arr[]={7,4,3,2,1};
    // calling function
    print(arr,4);
} 