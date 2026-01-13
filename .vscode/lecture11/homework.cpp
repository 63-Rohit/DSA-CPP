// que1: 
// Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;
//     cout<<"Enter the number: ";
//     cin>>n;

//     while(i<=n)
//     {
//         if(i%2==0)
//         {
//             cout<<i<<" ";
//         }
//         i++;
//     }
//     return 0;
// }


//using do while loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;
//     cout<<"enter the number: ";
//     cin>>n;

//     do{
//      if(i%2==0)
//      {
//         cout<<i<<" ";
//     }
//     i++;
// }
// while(i<=n);
// }



//que 2
//  Find the factorial of a number n using a while loop and do a while loop. and for loop


// factorial using for loop

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,fact=1;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     cout<<fact;
    

// }



// factorial using while loop

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,fact=1,i=1;
//     cout<<"Enter the number: ";
//     cin>>n;

//      while(i<=n)
//      {
//         fact=fact*i;
//         i++;
//     }
//     cout<<fact<<" ";
// }


// factorial using do while loop

// #include<iostream>
// using namespace std;
// int main()
// {
//     int fact=1,n,i=1;

//     cout<<"Enter the number: ";
//     cin>>n;

//     do{
//         fact=fact*i;
//         i++;
//     }while(i<=n);

//     cout<<fact<<" ";
// }




//que3
// Given a number n, print the corresponding month of it. For n=1 print Jan, n=2 print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     switch(n)
//     {
//         case 1:
//         cout<<"January";
//         break;

       
//         case 2:
//         cout<<"February";
//         break;

//         case 3:
//         cout<<"March";
//         break;

//         case 4:
//         cout<<"April";
//         break;

//         case 5:
//         cout<<"May";
//         break;

//         case 6:
//         cout<<"June";

//         case 7:
//         cout<<"July";

//         case 8:
//         cout<<"August";
//         break;

//         case 9:
//         cout<<"September";
//         break;

//         case 10:
//         cout<<"October";
//         break;

//         case 11:
//         cout<<"November";

//         break;
//         case 12:
//         cout<<"December";
//         break;

//         default:
//         cout<<"Enter a valid number";
//     }

// }



//que4
// Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.


// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter the character: ";
//     cin>>ch;

//     while(ch<='Z')
//     {
//         cout<<ch<<" ";
//         ch++;
//     }
// }


// que 5
// Give a number n, find if it is prime or not, use a while loop and break here to solve it.

// nhi hua YE
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=2;
//     cout<<"Enter the number: ";
//     cin>>n;

//     while(i<=n)
//     {
//       if(i%2==0)
//       {
    
//       }
//       else{
//         cout<<i<<" ";
//       }
//       i++;
//     }
// }



//que6  Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).


#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  for(int i=1;i<=n;i++)
  {
    if(i%3==0&&i%5==0)
    {
      continue;
    }
    cout<<i<<" ";
  }
}
