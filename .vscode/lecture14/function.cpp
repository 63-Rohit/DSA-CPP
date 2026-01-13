//To print prime numbers using Function

// #include<iostream>
// using namespace std;

//Function for printing prime number
// int isPrime(int n){
//   {
//     if(n<2)

//     return 0;

//   }

//   for(int i=2;i<n;i++)
//   {
//     if(n%i==0)
//     {
//       return 0;
//     }
//     return 1;
//   }

// }
// int main()
// {
//   int n;
//   cout<<"Enter the number: ";
//   cin>>n;

  //Function Calling
//   cout<<isPrime(n);
// }



//Sum of two numbers using function
// #include<iostream>
// using namespace std;

// //Function for sum of two numbers
// int sum(int a,int b){
//     int ans=a+b;
//     return ans;

// };
// int main()
// {
//     int a,b;
//     cout<<"Enter a: ";
//     cin>>a;
//     cout<<"Enter b: ";
//     cin>>b;

//     //function call
//    cout<< sum(a,b);

// }

//function for multiplication of two numbers
// #include<iostream>
// using namespace std;

// Function for multiplication of two numbers
// int mul(int m,int n){
//    int  ans=m*n;
// return ans;
// }
// int main()
// {
//   int a,b;
//   cout<<"Enter the value of a and b: ";
//   cin>>a>>b;
  

// Function Calling
// cout<<(a*b);
// }



//Function to print Coder Army
// #include<iostream>
// using namespace std;

//Function to print Coder Army
// void fun(){
//   cout<<"Coder Army";
// }

// int main()
// {
//   //Function calling
//   fun();
// }



#include<iostream>
using namespace std;

//Function for prime number
int isPrime(int n){
  if(n<2)
  {
    return 0;
  }

  for(int i=2;i<n;i++)
  {
    if(n%i==0)
    {
      return 0;
    }
    return 1;
  }
}

//function for  factorial
int fact(int n){
  int ans=1;
  for(int i=1;i<=n;i++)
  {
    ans=ans*i;
  }
  return ans;
}
int main()
{
  int a,b;
  cout<<"Enter a: ";
  cin>>a;
  cout<<"Enter b: ";
  cin>>b;


  //A is prime or not
  // A ka factorial
  //B is prime or not
  //B ka factorial
  //B-A is prime or not
  //B-A ka factorial
  cout<<isPrime(a);
  cout<<endl;
  cout<<fact(a);
  cout<<endl;
  cout<<isPrime(b);
  cout<<endl;
  cout<<fact(b);
  cout<<endl;
  cout<<isPrime(b-a);
  cout<<endl;
  cout<<fact(b-a);
}