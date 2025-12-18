// Lecture 48 Double Pointer and Multiple Pointer  in  c++.
// #include<iostream>
// using namespace std;
// int main()
// {
//  int n=10;
// //  Single Pointer
//  int *p=&n;
// //  Double Pointer
// int **p2=&p;
// cout<<p<<endl;
// cout<<&p<<endl;
// cout<<p2<<endl;
// cout<<&p2<<endl;
// // Triple Pointer
// int ***p3=&p2;
// cout<<p3<<endl;

// //  agar muje Value ko  modify karna ho jo n mai rakhi hai... n=10 ko 15 banadete hai 
// *p=*p+5;
// cout<<n<<endl;

// **p2=**p2+5;
// cout<<n<<endl;

// ***p3=***p3+5;
// cout<<n<<endl;
// }


#include<iostream>
using namespace std;

void fun(int *p)
{
   *p=*p+10;
}
int main()
{
    int n=10;
    int *p=&n;
    int **p2=&p;
    fun(p);
    cout<<n<<endl;
    cout<<*p<<endl;
}