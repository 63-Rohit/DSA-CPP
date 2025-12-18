//Add digit
//Example 27 =2+7=9
//62=6+2=8
//249=2+4+9=15=1+5=6 ans should be single digit

// #include<iostream>
// using namespace std;

// class solution{

    

// };
// int main()
// {

// }









//que 2 Check a entered number is a leap year or not
//example 1600 is a leap year,1700 1800 1900 2000 2100 is not a leap year

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//         if(n%400==0)
//         {
//             cout<<"It is a leap year";
//         }
//         else if(n%4==0 && n%100!=0)
//         {
//             cout<<"It is a leap year";
//         }
//         else{
//             cout<<"Not a leap year";
//         }
// }



//que3
//Reverse integer 234=>432

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,ans=0,rem;
//     cout<<"Enter the number: ";
//     cin>>n;
    
//     class Solution{
//         public:
//         int reverse(int x){
//     }

//         while(n>0)
//         {
//             rem=n%10;
//             n=n/10;
//             if(ans>INT_MAX/10||ans<INT_MIN/10)
//             {
                
//                 return 0;
//             }
//             ans=ans*10+rem;
            
//         }
        
//         cout<<ans;
//     };
// }




//que 4 Power of 2

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;


//     if(n<1)
//     {
//         cout<<"it is a negative number";
//     }

//     while(n!=1)
//     {
//       if(n%2==1)
//       {
//         cout<<"it is not a power of two";
//         return 0;
//       }

//       else{
//         n=n/2;
//     }
// }
// cout<<"it is power of two";


// }




//que5
// square root of x

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//   cout<<"Enter the number: ";
//   cin>>n;

//   for(int i=1;i<=n;i++)
//   {
//     if(n*n==n)
//     {
//         return n;
//     }
//   }


// }




//que6
// Check a number is palindrome
//ex NAMAN=>NAMAN  MAM=>MAM  121=>121  131=>131  161=>161  
//any negative number is not a palindrome number -121=121-

#include<iostream>
using namespace std;
int main()
{
    int n,ans=0,rem;
    cout<<"Enter the number: ";
    cin>>n;

    if(n<0)
    {
        cout<<"It cant be a palindrome number because it is a negative number";
    }
    while(n>0)
    {
        
        rem=n%10;
        n=n/10;
        ans=ans*0+rem;
    }
    if(n==ans)
    {

        cout<<ans<<"Palindrome number";
    }
    else{
        cout<<"Not a palindrome number";
    }
}



//que7
//complement of a number  5=>101 complement 010
