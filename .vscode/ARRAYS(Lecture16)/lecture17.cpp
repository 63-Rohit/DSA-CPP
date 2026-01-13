//search element in an array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,index=-1,key;
//     int arr[5];

//     cout<<"Enter 5 array elements: ";
//     cin>>n;
    
//     for(int i=0;i<=4;i++)
//     {
//         if(arr[i]==key)
//         {
//             index=i;
//             break;
//         }

//         cout<<index;
        

//     }
    
// }



// Reverse an Array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6];
//     int i=0,j=5;

//     cout<<"Enter the array elements: ";
//     for(int i=0;i<6;i++)
//     {
//         cin>>arr[i];
//     }
    

//     while(i<j)
//     {
//         swap(arr[i],arr[j]);
//         {

//             i++;
//             j--;
//         }
//     }

//     for(int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";

//     }
// }


//Reverse an array for odd number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=0,j=2;
//     int arr[3]={3,4,1};

//     while(i<0)
//     {
//         swap(arr[i],arr[j]);
//     }

//     for(int i=0;i<2;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


//Find second max element in an array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int ans=INT16_MIN;
//     int arr[5];
//     cout<<"Enter array elements: ";
    
//     for(int i=0;i<=4;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<=4;i++)
//     {
//         if(arr[i]>ans)
//         {
//             ans=arr[i];
//         }


//         int second=INT16_MIN;
//         for(int i=0;i<=4;i++)
//         {
//             if(ans!=arr[i])
//             {
//                 second=max(second,arr[i]);
//             }
//         }
//         cout<<second;
//     }

// }




//Find missing no in an array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,sum=0;
//     int arr[n];

//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=0;i<n-1;i++)
//     {
//         sum=arr[i];
    
//     // for(int i=1;i<=n;i++)
//     // {
//     //     sum=sum+i;
//     // }
//     // cout<<sum;

//     int ans=n*(n+1)/2;

//     cout<<sum-arr[i];
//     }
// }




//fibonacci series
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int arr[1000];

//     cout<<"Enter the number: ";
//     cin>>n;

//     //First element=0
//     //Second element=1
//     arr[0]=0;
//     arr[1]=1;

//     for(int i=2;i<=n-1;i++)
//     {
//         arr[i]=arr[i-1]+arr[i-2];
//     }
//     cout<<arr[n-1];
// }



//Rotate Array by 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[];
//     int n;
//     int temp=arr[n-1];

// }




//Passing Arrays to function
#include<iostream>
using namespace std;

void fun(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<sizeof(a)<<endl;
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[5]={3,2,1,6,7};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);
}