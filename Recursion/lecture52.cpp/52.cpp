// lecture 52 how to solve recursiion problem 4 diffreent methods.
// que 1 print 1 to n using recursion
// #include<iostream>
// using namespace std;
// void print(int num,int N)
// {
//  // Base case
// if(num==N)
// {
//     cout<<num<<endl;
//     return;
// }
//   cout<<num<<endl;
//   print(num+1,N);
// }
// int main()
// {
// //   print number from 1 to n
//  int n;
//  cout<<"Enter the value of n: ";
//  cin>>n;
//  print(1,n);
// }



// 2nd method with only 1 argument
#include<iostream>
using namespace std;
void print(int N)
{
    if(N==1)
    {
        cout<<1<<endl;
        return;
    }
    print(N-1);
    cout<<N<<endl;
}
int main()
{
    // print number from 1 to n
  int n;
  cout<<"enter the value of n: ";
  cin>>n;
  print(n);
}

// print even number from 1 to n  using recursion
// print even number from n to 1  using recursion
// print odd number from 1 to n  using recursion
// print odd number from n to 1  using recursion