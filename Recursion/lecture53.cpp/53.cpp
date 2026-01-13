// 1)Factorial of a  number using recursion.


// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     if(n==1||n==0)
//     {
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main()
// {

//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     if(n<0)
//     {
//     cout<<"factorial is not possible";
//     return 0;
// }    
//     cout<<fact(n);

// }



// 2)sum of first n natural number using recursion.
// #include<iostream>
// using namespace std;
// int printSum(int n)
// {
//     if(n==1)
//     {
//         return 1;
//     }

//     return n+printSum(n-1);
// }
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     // Calling function
//     cout<<printSum(n);

// }


// 3 Power of 2 using recursion
// #include<iostream>
// using namespace std;
// int pow(int num,int n)
// {

//     if(n==0)
//     {
//     return 1;
//     }  

//      if(n==1)
//       {
//         return num;
//       }

//     return num*pow(num,n-1);
// }
// int main()
// {
//   int n;
//   cout<<"enter the input: ";
//   cin>>n;
//   cout<<pow(2,n);
// }


//4) Sum of square of n natural number using recursion.

#include<iostream>
using namespace std;

int printSquare(int n)
{
    if(n==1)
    {
        return 1;
    }

    return n*n+printSquare(n-1);


}
int main()
{
   int n;
   cout<<"Enter the input: ";
   cin>>n;

   cout<<printSquare(n);
}