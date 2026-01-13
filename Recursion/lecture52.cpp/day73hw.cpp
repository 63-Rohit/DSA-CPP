// Day 73/180 Solving Recursion From 4 Method
 
// 1: Print all odd numbers from 1 to n using recursion.


// #include<iostream>
// using namespace std;

// void printOdd(int n)
// {
    //     if(n==1)
    //     {
        //         cout<<1<<" ";
        //         return;
        //     }
        //     printOdd(n-2);
        //     cout<<n<<" ";
        // }
        // int main()
        // {
            //     int n;
            //     cout<<"Enter the value of n: ";
            //     cin>>n;
            //     printOdd(n);
            // }
            
            
  // 2: Print all numbers from 10 to n using recursion, where n will be greater than 10.
            // #include<iostream>
            // using namespace std;
            
            // void print(int n)
            // {
            //     if(n<=10)
            //     {
            //         cout<<10<<endl;
            //         return;
            //     }
            //     print(n-1);
            //     cout<<n<<endl;
            // }
            // int main()
            // {
            //     int n;
            //     cout<<"Enter the input: ";
            //     cin>>n;
            //     print(n);
                
            // }


  // 3: Write a Table program using recursion. Take input number n, and print its table. 
#include<iostream>
using namespace std;

void printTable(int n,int i)
{
  if(i>10)
  {
    return;
  }
    cout<<n*i<<endl;
    printTable(n,i+1);
}

int main()
{
  int n;
  cout<<"enter the value iof n: ";
  cin>>n;
  printTable(n,1);
}