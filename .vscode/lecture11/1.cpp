//print numbers from 1 to 10 using while loop

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=10;
//     int i=1;

//     while(i<=n)
//     {
//         cout<<i<<" ";
//         i++;
//     }
// }


//User input  code for printing numbers from 1 to 10

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//  cout<<"Enter n: ";
//   cin>>n;
//   int i=1;
//     while(i<=n)
//     {
//         cout<<i<<" ";
//         i++;
//     }
// }



//Print multiplicatiom table using while loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int i=1;
//     cout<<"Enter the number: ";
//     cin>>n;
//     while(i<=10)
//     {
//         cout<<n*i<<" ";
//         i++;
//     };
// }



//Wap to find factors of a number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int i=1;
//     cout<<"Enter the number: ";
//     cin>>n;

//     while(i<=n)
//     {
//         if(n%i==0)
//         {

//             cout<<i<<" ";
//         }
//         i++;
//     };

// }


//print even numbers and odd numbers from 1 to n using while loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int i=1;
//     cout<<"Enter the number: ";
//     cin>>n;

//     while(i<=n)
//     {
//         if(i%2==0)
//         {
//             cout<<i<<" ";
//         }
//         i++;
//     };
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int i=1;
//     cout<<"Enter the number: ";
//     cin>>n;

//     while(i<=n)
//     {
//         if(i%2!=0)
//         {
//             cout<<i<<" ";
//         }
//         i++;
//     }

// }



//Do-While Loop


//print the numbers from 1 to 5 using do while loop
// #include<iostream>
// using namespace std;
// int main()
// {

//     int n;
//     int i=1;
//     cout<<"Enter the number: ";
//     cin>>n;
 
//  do{
//     cout<<i<<" ";
//     i++;
//  }
//  while(i<=n);

// }



//Code for printing sum of n natural numbers using do while loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;
//     int sum=0;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     do{
//         sum=sum+i;
//         i++;
//     } while(i<=n);
//     cout<<sum<<" ";


// }



//Concept of break and continue statements

//Break statement

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;

//     cout<<"Enter the number: ";
//     cin>>n;

//     while(i<=n)
//     {
//         if(i==4)
//         {
//             break;
//         }
//         cout<<i<<" "; //o/p+>1,2,3
//         i++;
//     }
// }


//Continue statement

//continue
// #include<iostream>
// using namespace std;
// int main()
// {
//   //Continue

//   for(int i=1;i<=10;i++)
//   {
//     if(i==4)
//     {
//         continue;
//     }
//     else{
//         cout<<i<<" "; //o/p+.1,2 3,5,6,7,8,9,10
//     }
//   }
// }


//example of continue statement like we have to print the numbers from 1 to 100 and skip the number which is divided by 4.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;
//     cout<<"Enter the valueof n: ";
//     cin>>n;


//     while(i<=n)
//     {
//        if(i%4==0)
//        {
//            i++;
//            continue;
//         }
//         cout<<i<<" ";
//         i++;
//     }
// }



//Switch Statement
#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter day: ";
    cin>>day;

    switch(day)
    {
        case 1:
        cout<<"Monday";
        break;       

        case 2:
        cout<<"Tuesday";
       break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
         break;
        default:
        cout<<"Enter a valid number";
        break;
    }


}