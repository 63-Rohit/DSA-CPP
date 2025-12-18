// Lecture 51 Introduction to Recursion 
#include<iostream>
using namespace std;

//   But i want to make only ne function call and solve this problem.
void fun0(int n)
{
    cout<<"Happy birthday";
}

void fun1(int n)
{
    cout<<n<<" days left for birthday\n";
}

void fun2(int n)
{
    cout<<n<<" days left for birthday\n";
}

void fun3(int n)
{
    cout<<n<<" days left for birthday\n";
}




int main()
{
    int n=3;
    //Iterative approach
    // for(int i=n;i>0;i--)
    // {
    //     cout<<i<<" days left for birthday\n";
    // }
    // cout<<"Happy Birthday";

    // with the help of function
      fun3(3);
      fun3(2);
      fun3(1);
      fun0(0);

}