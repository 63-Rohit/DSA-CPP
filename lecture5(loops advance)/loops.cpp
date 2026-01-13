//Code for printing numbers from 101 to 200
//#include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=101;i<=200;i++)
//     {
//         cout<<i<<endl;
//     }
// }


//code for printing alphabhets a to z
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;

//     for(ch=65;ch<=96;ch++)
//     {
//         cout<<ch<<endl;
//     }
// }
//code for printing numbers in reverse order
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=n;i>=1;i--)
//     {
//         cout<<i<<endl;
//     }
// }
//code for printing numbers from 1 to 100 but difference is 3
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=100;i=i+3)
//     {
//         cout<<i<<endl;
//     }
// }
// code for printing multiplication  table
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number whose multiplication table you want to print: ";
//     cin>>n;
//     for(int i=1;i<=10;i++)
//     {
//         cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     }
// }

///alternate way for printing multiplication table
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number whose multiplication table you want to print: ";
//     cin>>n;
//     for(int i=n;i<=10*n;i=i+6)
//     {
//         cout<<i<<endl;
//     }

// }



// code for Calculating power of a number
// #include<iostream>
// using namespace std;
// int main()
// {
// int n,pow,i,num;
// cout<<"Enter the number whose power you want to print: ";
// cin>>n;
// cout<<"enter the power: ";
// cin>>pow;
// num=n;
// for(int i=1;i<pow;i++)
// {
//     num=num*n;
// }
// cout<<num;
// }

//code for printing sum of natural numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int sum=0,n,i;
//     cout<<"Enter the numnbers: ";
//     cin>>n;
//     for(int i=0;i<+n;i++)
//     {
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
// }


//code for sum of square of n natural numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int sum=0,i,n;
//     for(int i=1;i<=10;i++)
//     {
//         sum==sum+i*i;
//     }
//     cout<<sum<<endl; 
// }

//alternate way for printing sum of natural numbers using formula
//#include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter a natural number: ";
//     cin >> n;

//     // Calculate the sum using the formula
//     int sum = n * (n + 1) / 2;

//     cout << "The sum of natural numbers up to " << n << " is: " << sum << endl;

//     return 0;
// }


//code for printing factorial of a number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int fact=1,n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {

//         fact=fact*i;
//     }
//     cout<<fact;
    
    //hw bade number dalne par factorial 0 kyu ara hai
// }

//code for printing prime number
//prime number=> which divides by 1 and itself.
//1 and 0 are not prime numbers

// #include<iostream>
// using namespace std;
//  int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     if(n<2)
//     {
//         cout<<"Not a prime number";
//         return 0;
//     }
//     else{
//         for(int i=2;i<n;i++)
//         {
//             if(n%i==0)
//             {
//                 cout<<"Not a prime number"<<endl;
//                 return 0;
//             }
//         }
//             cout<<" it is a prime number"<<endl;
//             return 0;
//     }
// }


//code for printing fibonacci series
// fibonacci series=> 0,1 1,2,3,5,8,13,21
#include<iostream>
using namespace std;
int main()
{
   int n,a=0,b=1,c;
   cout<<"Enter term: ";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cout<<a<<endl;
      c=a+b;
      a=b;
      b=c;
   }

}

//hw isko recursion se karna ab