#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    // Printing the address of first elements or 0 index
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    //Printing the address of 2nd element or 1 index 
 cout<<arr+1<<endl;   
 cout<<&arr[1]<<endl;



//  print the value of 0 index
cout<<arr[0]<<endl;
cout<<*arr<<endl;
cout<<*(arr+0)<<endl;
cout<<*ptr<<endl;

// printing all the address of elements

for(int i=0;i<=4;i++)
{
    cout<<arr+i<<" ";
}
cout<<endl;
// printing the value of all elements of array
for(int i=0;i<=4;i++)
{
    cout<<*(arr+i)<<" ";
}

cout<<endl;
// Print all the value 
for(int i=0;i<=4;i++)
{
    cout<<ptr[i]<<" ";
}
// Print all the address
for(int i=0;i<=4;i++)
{
    cout<<ptr+i<<endl;
}

// Aritthmetic operation   ptr++; ptr--; ptr=ptr+1n

// Print all the value
for(int i=0;i<=4;i++)
{
    cout<<*ptr<<" ";
    ptr++;
}

// /addition 
ptr=ptr+3;
cout<<*ptr<<endl;

ptr=ptr-2;
cout<<*ptr<<endl;
}