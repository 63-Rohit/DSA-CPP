#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%400==0)
    {
        cout<<"It is a leap year";
    }
    else if(n%4==0 && n%100==0)
    {
        cout<<"not a leap year";
    }
    else{
        cout<<"It is a leap year";
    }
}