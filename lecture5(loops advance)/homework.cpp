//que1 print numbers from 280 to 250 with the help of for loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=280;i>=250;i--)
//     {
//         cout<<i<<endl;
//     }
// }

//que2 print char from 'A' to 'Z'
// #include<iostream>
// using namespace std;
// main()
// {
//   char ch;
//   for(ch=65;ch<=90;ch++)
//   {
//     cout<<ch;
//   }
// }

//alternate way for printing alphabhets from ascii value
// #include<iostream>
// using namespace std;
// main()
// {
  
//   for( int i=65;i<=90;i++)
//   {
//     cout<<char(i)<<endl;
//   }
// }


//que3)code for printing alphabhers from 'Z' to 'A'
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
    
//     for(ch=97;ch>=65;ch--)
//     {
//         cout<<ch<<endl;
//     }
// }

//alternate way
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     for(int i=97;i>=65;i--)
//     {
//         cout<<char(i)<<endl;
//     }
// }
//que4)There is An Arithmetic Progression,First number is 220 and common difference is 7.So print all the numbers from 220 to 730 which follow the AP.

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=220;i<=250;i=i+7)
//     {
//         // cout<<i<<endl;
//         cout<<i<<" ";
//     }
// }



//que5) Print sum of square of first n  natural number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,sum=0;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+i*i;
//     }
//     cout<<sum;

// }

//que6) print sum of cube of first n natural number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,sum=0;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+i*i*i;
//     }
//     cout<<sum;

// }



//que7) Print nth Fibonacci number
#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c;
    cout<<"Enter the nbumber: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }

}