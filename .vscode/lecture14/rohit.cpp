// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     if(n%400==0)
//     {
//         cout<<"It is a leap year";
//     }
//     else if(n%4==0 && n%100==0)
//     {
//         cout<<"not a leap year";
//     }
//     else{
//         cout<<"It is a leap year";
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c;
    cout<<"Enter the term: ";
    cin>>n;


    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;

    }
    cout<<a<<" ";

}