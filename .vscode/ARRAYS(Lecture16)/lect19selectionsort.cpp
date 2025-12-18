// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={9,7,3,1,6};
//     for(int i=0;i<5;i++)
//     {
//       int minIndex=i;
//       for(int j=i+1;j<5;j++)
//       {
//         if (arr[j]<arr[minIndex])
//         {
//           minIndex=j;
//         }
//       }
//       swap(arr[minIndex],arr[i]);
//     }
//     for(int i=0;i<=4;i++)
//     {
//     cout<<arr[i]<<" ";
//    }

// }


//User Input
#include<iostream>
using namespace std;
int main()
{
  int arr[1000];
  int n;
  
  cout<<"Enter the size of array: ";
  cin>>n;//Size of array

    cout<<"Enter array elements: ";
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
    
     }
    
    for(int i=0;i<n-1;i++)
    {
    int minIndex=i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[minIndex])
      {
        minIndex=j;
      }
    }
    swap(arr[minIndex],arr[i]);
  }

  
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

}
