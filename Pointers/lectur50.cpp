// Lecture 50 Dynamic Memory allocation of 2dD and 3D Arrays in C++.

// Implementing 2d array with the help of pointers
#include<iostream>
using namespace std;
int main()
{
    //1) Array create karna hai jo store krega address ko
    int n,m;//n =rows m=col
    cin>>n>>m;

    int **ptr=new int*[n];


    // Create 2d array
    for(int i=0;i<n;i++)
    {
        ptr[i]=new int[m];
    }


    // Entering values in array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cin>>ptr[i][j];
        }
    }

    // Print the value
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cout<<ptr[i][j];
        }
    }

    // Releasing memeory in heap
    for(int i=0;i<n;i++)
    {
        delete ptr[i];
        delete []ptr;
    }
}
