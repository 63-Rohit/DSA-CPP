// que Print n to 1 using recursion
// #include<iostream>
// using namespace std;
// void printNo(int n)
// {
//     // base case
//     if(n==1)
//     {
//         cout<<1;
//         return;
//     }

//     cout<<n<<" ";
//     // Recursive function call
//     printNo(n-1);
// }
// int  main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     // Calling function
//     printNo(n);

// }

// print n to 2 even number using recursion
// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==2)
//     {
//         cout<<2;
//         return;
//     }
//       cout<<n<<endl;
//      print(n-2);
// }
// int main()
// {
//     int n;
//     cout<<"Enter the value :";
//     cin>>n;
//     print(n);

// }

// que3 Print coder army 10 times using recursion
// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     // Base case
//     if(n==1)
//     {
//         cout<<"Coder Army";
//         return ;
//     }
//     cout<<"CoderArmy"<<endl;
//     // recursive function call
//     print(n-1);
// }
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     // calling function
//     print(n);

// }

//  Print all odd number from n to 1 using recursion
// #include<iostream>
// using namespace std;
// void print(int n)

// {
//     // Base case
//     if(n==1)
//     {
//         cout<<1;
//         return;
//     }

//     cout<<n<<endl;
//     // recursive function call
//     print(n-2);
// }   
//  int main()
// {
//   int n;
//   cout<<"Enter n: ";
//   cin>>n;
//   if(n%2==0)
//   {
//     cout<<"Please enter a odd number";
//   }
// //   Calling function
// print(n);
// }


// que 3: Print all numbers from 1 to n using recursion. 
#include<iostream>
using namespace std;
void print(int n)

{
    // Base Case
    if(n==1)
    {
        cout<<1<<" ";
        return;
    }

    // recursive function call
    print(n-1);
    cout<<n<<" ";  
}
    int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // Calling function
    print(n);

}