/*



3: Bubble Sort Algorithm to sort the array of char in ascending order.



*/

// que1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.
// #include<iostream>
// using namespace std;
// int arr[5];
// int n;

// int main()
// {
    
//     cout<<"Enter the size of array: ";
//     cin>>n;
    
//     cout<<"Enter array elements: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
    
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j]<arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
    
//     // printing array elements
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


// que2: Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last. Question was explained in the class.

// Normally, in bubble sort, you move the largest element to the last position in each pass by comparing adjacent elements from left to right.

// But this question says:

// “Sort the array in increasing order by taking the smallest number to the first place, starting from the last.”

// So here, you’re doing the reverse version of bubble sort:

// Start comparing elements from the end (right) to the beginning (left).

// After each pass, the smallest element “bubbles” to the front of the array.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     cout<<"Enter array elements: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }


// for(int i=n-1;i>=0;i--)
// {
//     for(int j=0;j<i;j++)
//     {
//         if(arr[j]>arr[j+1])
//         {
//             swap(arr[j],arr[j+1]);
//         }
//     }
// }

// // printing array elements
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }
// }





//que Move only the first largest element to its correct position
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     cout<<"enter the elements of array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<n-1;i++)
//     {
//         if(arr[i]>arr[i+1])
//         {
//             swap(arr[i],arr[i+1]);
//         }
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// que  check if array is sorted or not

#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    bool swapped=0;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter the elements in an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        
        }
        if(swapped==0)
    {
        return 0;

    }
}
}