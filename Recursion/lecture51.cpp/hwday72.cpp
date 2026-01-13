// Day 72/180 Introduction to Recursion

// 1: Print “Coder Army” 10 times using recursion  
// 2: Print all odd number from n to 1 using recursion
// 3: Print all numbers from 1 to n using recursion. 

// que1  Print “Coder Army” 10 times using recursion  
// #include<iostream>
// using namespace std;

// void print(int n){
    //     if(n==1)
    //     {
        //         cout<<"Coder Army";
        //         return ;
        //     }
        //     cout<<"Coder Army"<<endl;
        //     print(n-1);
        // }
        // int main()
        // {
            //     int n;
            //     cout<<"Enter the value of n: ";
            //     cin>>n;
            //     //  Calling function
            //     print(n);
            // }
            
            
// que 2: Print all odd number from n to 1 using recursion
// #include<iostream>
// using namespace std;
// void printOdd(int n){
//     if(n==1)
//     {
//         cout<<1;
//         return;
//     }
    
//     cout<<n<<" ";
// Recursive function call
//     printOdd(n-1);
// }
// int main()
// {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     //    calling function
//     printOdd(n);
// }


// que 3: Print all numbers from 1 to n using recursion. 
#include<iostream>
using namespace std;
void printnaturalNo(int n)
{
    if(n==0)
    {
        return ;
    }

    printnaturalNo(n-1);
    cout<<n<<" ";

}
int main()
{
    int  n;
    cout<<"Enter the value of n: ";
    cin>>n;
    printnaturalNo(n);
}