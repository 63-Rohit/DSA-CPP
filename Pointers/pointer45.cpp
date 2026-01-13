// Day 61 Pointers in C++
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    // print the address of a
    cout<<&a<<endl;


    // or another way to print address of a

    int *ptr=&a;
    // How to read this ptr ek pointer hai jo point kar raha hai integer type ki value ko.
    cout<<sizeof(ptr)<<endl;
    cout<<ptr<<endl;
    
    float b=2.6;
    float *ptr1=&b;
    cout<<ptr1<<endl;
    cout<<sizeof(ptr1);
}
