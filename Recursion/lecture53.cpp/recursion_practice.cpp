// que1)Print n to 1 using recursion
// #include<iostream>
// using namespace std;

// void print(int n)
// {
//     if(n==1)
//     {
//         cout<<1<<endl;
//         return ;
//     }
//     cout<<n<<endl;
//     print(n-1);
// }
// int main()
// {
//    int n;
//    cout<<"Enter the input: ";
//    cin>>n;
//    print(n);
// }


// que2)print n to 2 even number using recursion

// #include<iostream>
// using namespace std;
// void print(int n)
// {
//    if(n==2)
//    {
//     cout<<2<<endl;
//     return ;
// }
// // Recursive call
// cout<<n<<endl;
// print(n-2);
// }
// int main()
// {
// int n;
//    cout<<"Enter the input: ";
//    cin>>n;
//    if(n%2!=0)
//    {
//     cout<<"please enter even number";
//     return 0;
//    }
//    print(n);
// }


// Hw  Day 72/180 Introduction to Recursion

// 1: Print “Coder Army” 10 times using recursion

// #include<iostream>
// using namespace std;

// void print(int n)
// {
   //    if(n==1)
   //    {
      //       cout<<"Coder army"<<endl;
      //       return ;
      //    }
      
      //    cout<<"Coder Army"<<endl;
      //    print(n-1);
      // }
      // int main()
      // {
         //    int n;
         //    cout<<"Enter the input: ";
         //    cin>>n;
         //    // Calling function
         //    print(n);
   
// }
// 2: Print all odd number from n to 1 using recursion
// #include<iostream>
// using namespace std;

// void printOdd(int n)
// {
//    if(n==1)
//    {
//       cout<<1<<endl;
//       return ;
//    }
   
//    cout<<n<<endl;
//    printOdd(n-2);
// }
// int main()
// {
//    int n;
//    cout<<"enter the value of n: ";
//    cin>>n;
//    if(n%2==0)
//    {
//       cout<<"Please eneter a odd number";
//       return 0;
//    }
//    // Calling function
//    printOdd(n);
   
// }


// 3: Print all numbers from 1 to n using recursion. 
#include<iostream>
using namespace std;

void printNatural(int n)
{
   if(n==1)
   {
      cout<<1<<endl;
      return ;
   }

   // recursive call
   printNatural(n-1);
   cout<<n<<endl;
}
int main()
{
  int n;
  cout<<"Enter value of n: ";
  cin>>n;
//   Calling function
printNatural(n);
}