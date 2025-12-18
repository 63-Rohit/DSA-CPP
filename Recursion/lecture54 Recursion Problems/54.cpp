// Lecture 54 Recursion Leetcode Problems

// que1) fibonacci series
// #include<iostream>
// using namespace std;

// int fib(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(n==1)
//     {
//         return 1;
//     }

//     return fib(n-1)+fib(n-2);
// }
// int main()
// {
//   int n;
//   cout<<"Enter the value of n: ";
//   cin>>n;
// //   Calling function
// cout<<fib(n);
// }



// que2)Climbing stair
// #include<iostream>
// using namespace std;
//  int climbingstairs(int n)
//  {
//     if(n<=1)
//     {
//         return 1;
//     }
//     return climbingstairs(n-1)+climbingstairs(n-2); 
// }
// int main()
// {
//   int n;
//   cout<<"Enter n: ";
//   cin>>n;
// //   Calling function
// cout<<climbingstairs(n);
// }


// with the help of for loop

// #include<iostream>
// using namespace std;

// int a=1,b=1,c;
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=2;i<=n;i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     cout<<"Number of ways to climb: "<<b;
//     return 0;
// }


// que3)GCD of a number using recursion
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
      return a;
    }
    return gcd(b,a%b);
}
int main()
{
 int n;
 cin>>n;
//  cout<<gcd(a,b);0
}