// Memory management static vs dynamic memory allocation in arrays 


#include<iostream>
using namespace std;
int main()
{
    //Variable k liye heap m memory allocate karane hai 
    int *ptr=new int;
    *ptr=5;
    cout<<*ptr<<endl;

    float *ptr2=new float;
    *ptr2=3.6;
    cout<<*ptr2<<endl;

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *p=new int[n];

    //inserting value in array
    for(int i=0;i<n;i++)
    {
        p[i]=i+1;
    }

    // printing values
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }

    // delete keyword use
    delete ptr;
    delete ptr2;
    delete p;
    // Its a vry good practice to delete memory you have taken.
}
