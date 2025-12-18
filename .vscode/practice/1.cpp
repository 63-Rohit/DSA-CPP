//Lecture 3

//Take user input from sum of two numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     cout<<a+b;
// }


//if else condition
// #include<iostream>
// using namespace std;
// int main()
// {
//     int package;
//     cout<<"Enter the package:";
//     cin>>package;
//     if(package>=10)
//     {
//         cout<<"Accepted";
//     }
//     else{
//         cout<<"Rejected";
//     }
// }


//Marks grading system using if and else condition

// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks;
//     cout<<"Enter the marks: ";
//     cin>>marks;
//     if(marks>=33)
//     {
//         cout<<"Passed";
//     }
//     else{
//         cout<<"Failed";
//     }
// }

//compare two variables using if else
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     if(a>b)
//     {
//         cout<<"a is greater than b";
//     }
//     else{
//         cout<<"b is greater than a";
//     }
// }

//now compare three variables and print the greatest among three
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     cout<<"Enter the value of c: ";
//     cin>>c;

//     if(a>b)
//     {
//         cout<<"a is greater than b";
//     }
//     else if(a>c)
//     {
//       cout<<"a is greater than all three variables";
//     }

//     else{
//         cout<<"a is not the largest number among three";
//     }


// }



//To check a number is even or odd using if else
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     if(n%2==0)
//     {
//       cout<<"Number is even";
//     }
//     else{
//         cout<<"number is odd";
//     }
// }



//Voter eligibility
// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"Enter the age: ";
//     cin>>age;
    
//     if(age>=18)
//     {
//         cout<<"Person is eligible for vote";
//     }
//     else{
//         cout<<"Person is not eligible for vote";
//     }
// }



//check whetger a number is positive negative or zero

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the number: ";
//   cin>>n;

//   if(n>0)
//   {
//     cout<<"Number is positive";
//   }
//   else if(n==0)
//   {
//     cout<<"Number is zero";
//   }
//   else{
//     cout<<"Number is negative";
//   }

// }


//To check a number is vowel or a consonant
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter the characters: ";
//     cin>>ch;

//     if(ch=='a'||ch=='b'||ch=='i'||ch=='o'||ch=='u')
//     {
//         cout<<"Vowels";
//     }
//     else{
//         cout<<"Consonant";
//     }
// }


//Print weekdays with number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     if(n==1)
//     {
//         cout<<"Monday";

//     }
//     else if(n==2)
//     {
//         cout<<"Tuesday";
//     }
//     else if(n==3)
//     {
//         cout<<"Wednesday";
//     }
//     else if(n==4)
//     {
//         cout<<"Thursday";
//     }
//     else if(n==5)
//     {
//         cout<<"Friday";
//     }
//     else if(n==6)
//     {
//         cout<<"Saturday";

//     }
//     else if(n==7)
//     {
//         cout<<"Sunday";
//     }
//     else{
//         cout<<"Enter a valid no.";
//     }
// }



//now made a same program using switch statement
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     switch(n)
//     {
//         case 1:
//         cout<<"Monday";

//         case 2:
//         cout<<"Tuesday";
//     }
// }



//Loop Concept
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         cout<<"Coder Army"<<endl;;
//     }
// }

//print numbers from 1 to 5
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         cout<<i<<endl;
//     }
// }

//print squares from 1 to n
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i*i<<" ";
//     }
// }


//print n natural numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter n: ";
//   cin>>n;
//   for(int i=1;i<=n;i++)
//   {
//     cout<<i<<endl;
//   }
// }


//print all even numbers upto 20
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//   for(int i=2;i<=n;i=i+2)
//   {
//     cout<<i<<" ";
//   }
// }



// day 4 homework
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n,n2;
//   cout<<"Enter number 1: ";
//   cin>>n;
//   cout<<"Enter number 2: ";
//   cin>>n2;
//   if(n>n2)
//   {
//     cout<<n;
//   }
//   else if(n=n2)
//   {
//     cout<<"Both number cant be same";
//   }
//   else{
//     cout<<n2;
//   }

// }



//que 2
// #include<iostream>
// using namespace std;
// int main()
// {
//   int age;
//   cout<<"Enter age :";
//   cin>>age;
//   if(age>=18)
//   {
//     cout<<"Adult";
//   }
//   else{
//     cout<<"Teenager";
//   }
// }



//que 3
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter n: ";
//   cin>>n;

//   if(n==1)
//   {
//     cout<<"January";
//   }
//   else if(n==2)
//   {
//     cout<<"February";
//   }
//   else if(n==3)
//   {
//     cout<<"March";
//   }
//   else if(n==4)
//   {
//     cout<<"April";
//   }
//   else if(n==5)
//   {
//     cout<<"May";
//   }
//   else if(n==6)
//   {
//     cout<<"June";
//   }
//   else if(n==7)
//   {
//     cout<<"July";
//   }
//   else if(n==8)
//   {
//     cout<<"August";
//   }
//   else if(n==9)
//   {
//     cout<<"October";
//   }
//   else if(n==10)
//   {
//     cout<<"November";
//   }
//   else if(n==11)
//   {
//     cout<<"December";
//   }
//   else 
//   {
//     cout<<"Enter a valid no";
//   }

// }



//que 4

// #include<iostream>
// using namespace std;
// int main()
// {
//   int age;
//   cout<<"Enter age: ";
//   cin>>age;
  
//    if(age<12||age>65)
//    {
//     cout<<"You are eligible for discount";
//    }
//    else{
//     cout<<"You are not eligible for discount";
//    }
// }


//for loop

//Print India will win the worldcup 5 times
// #include<iostream>
// using namespace std;
// int main()
// {
//   for(int i=1;i<=5;i++)
//   {
//     cout<<"India will win the 2026 worldcup";
//     cout<<endl;
//   }
// }



//Print all  Odd numbers from 1 to n taken n as input from the user


// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the number: ";
//   cin>>n;

//   for(int i=1;i<=n;i+=2)
// {
//   cout<<i<<endl;

// }

// }



// print all numbers from 1 to n which is divisible by 4. taken n as input from the user.

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter n: ";
//   cin>>n;

//   for(int i=1;i<=n;i++)
//   {
//     if(i%4==0)
//     {
//       cout<<i<<endl;
//     }
//   }
// }



//Lecture 5 Practice

//print numbers from 101 to 200
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=101;i<=200;i++)
//     {
//         cout<<i<<" ";
//     }
// }


//code for printing alphabets from a to z

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     for(ch='a';ch<='z';ch++)
//     {
//         cout<<ch<<" ";
//     }
// }

//alternate way
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     for(int i=97;i<=122;i++)
//     {
//         cout<<char(i)<<" ";
//     }
// }


//code for printing numbers from 10 to 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(int i=n;i>=1;i--)
//     {
//         cout<<i<<" ";
//     }
// }



//code for printing numbers from 1 to 100 but difference is 3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(int i=1;i<=n;i+=3)
//     {
//         cout<<i<<" ";
//     }

// }


//code for printing multiplication table

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number whose multiplication table you want to print: ";
//     cin>>n;

//     for(int i=1;i<=10;i++)
//     {
//         cout<<n*i<<" ";
//     }
// }



//alternate way
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter the number whose multiplication table you want to print: ";
//     cin>>num;

//     for(int i=num;i<=num*10;i+=num)
//     {
//         cout<<i<<" ";
//     }
// }


//code for calculate power of a number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int pow;
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<"Enter the power: ";
//     cin>>pow;


//     for(int i=1;i<pow;i++)
//     {

//         cout<<num*n<<" ";
//     }


// }



//code for printing sum of n natural numbers

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int sum=0;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     cout<<sum<<" ";
// }

//alternate way for this using formula
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
    
//     cout<<"Enter the number: ";
//     cin>>n;

//         cout<<n*(n+1)/2<<" ";
// }

//code for sum of square of natural numbers

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+i*i;
//     }
//     cout<<sum<<" ";
// }


//code for factorial of a number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,fact=1;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(int i=1;i<=n;i++)
//     {
    
//             fact=fact*i;
//         }
//         cout<<fact;
    
// }

//alternate way  for finding factorial of a number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,fact=1;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(int i=n;i>=1;i--)
//     {
    
//             fact=fact*i;
//         }
//         cout<<fact;
    
// }



//code for finding factorial of a number using recursion

// #include<iostream>
// using namespace std;

// //Function prototype declaration 
// //in C++ ham recursive function ko main ke niche likh sakte hai bas ek function prototype(declaration) main se phke dena padega

// long long factorial(int n);

// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;

//     if(num<0)
//     {
//         cout<<"factorial  is not defined for negative numbers: "<<endl;
//     }
//     else{
//         cout<<factorial(num)<<endl;    
//     }
//     return 0;
// }


//Recursive function to calculate factorial

// long long factorial(int n){
//     if(n==0||n==1)
//     {
//         return 1;//Base case
//     }
//     else{
//         return n*factorial(n-1);//Recursive call
//     }
// }





//code for printing prime numbers
//prime numbers which is divisible by 1 and itself.1  is neither prime nor composite.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//      if(n<2)
//      {
//         cout<<"Not a prime number: ";
//         return -1;
//       }   
//       else{
//         for(int i=2;i<n;i++)
//         {
//             //i<=n ye wrong hojyga because n % n == 0 hamesha true hota hai,
//             if(n%i==0)
//             {

//                 cout<<"Not prime";
//                 return 0;
//             }
//         }
//         cout<<"prime number";
//         return 0;
//     }
  
// }




//Code for printing fibonacci series

//0 1 1 2 3 5 8 13 21 34

// #include<iostream>
// using namespace std;
// int main()
// {
//     int last=0,prev=1,current;
//      int n;
//      cout<<"Enter the term: ";
//      cin>>n;
//      for(int i=1;i<=n;i++)
//      {
//         cout<<last<<" ";
        
//         current=last+prev;
//         last=prev;
//         prev=current;
//     }
// }


//hw isko recursion s try krna









//Day 5 homework
//code for printing sum of squares of first n natural numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int sum=0;
//     cout<<"Enter n: ";
//     cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//     sum=sum+i*i;
//    }
//    cout<<sum<<" ";

// }


//code for printing  sum of of cube of first n natural numbers

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int sum=0;
//     cout<<"Enter n: ";
//     cin>>n;

//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+i*i*i;
//     }
//     cout<<sum<<" ";
// }

//Code for printing nth fibonacci number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,a=0,b=1,c;
//     cout<<"Enter n: ";
//     cin>>n;

//     for(int i=1;i<=n;i++)
//     {
//         cout<<a<<" ";
  
//         c=a+b;
//         a=b;
//         b=c;
        
//     }
// }



//lecture 6
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


//que2

// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1;col<=n;col++)
//         {
//             cout<<"10 ";
//         }
//         cout<<endl;
//     }

// }


//que 3

// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1;col<=n;col++)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }



//que4

// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


//que5
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;
//     for(int i=n;i>=1;i--)
//     {
//        for(int j=n;j>=1;j--)
//        {
//         cout<<j<<" ";
//        }
//        cout<<endl;
//     }
// }


//que6
// // 1 4 9 16 25
// // 1 4 9 16 25
// // 1 4 9 16 25
// // 1 4 9 16 25
// // 1 4 9 16 25


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         // cout<<i*i<<" ";
//         for(int j=1;j<=n;j++)
//         {
//             cout<<j*j<<" "; 
//         }
//         cout<<endl;
//     }


// }


//que7

// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter the character: ";
//     cin>>ch;

//     for(char ch='a';ch<='e';ch++)
//     {
//       for(int j=1;j<=5;j++)
//       {
//         cout<<ch<<" ";
//       }
//       cout<<endl;
//     }
// }
    


//alternate way column se kaise print hoga ye krna
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter the character: ";
//     cin>>ch;

//     for(int i=1;i<=5;i++)
//     {
//       for(char ch='a';ch<='a'+4;ch++)
//       {
//         cout<<ch<<" ";
//       }
//       cout<<endl;
//     }
// }
    


//alternate way
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter n: ";
//   cin>>n;

//   for(int row=1;row<=5;row++)
//   {
//     char name='a'+(row-1);
//     for(int col=1;col<=n;col++)
//     {
//       cout<<name<<" ";
//     }
//     cout<<endl;
//   }

// }



//que8

// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e


// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the input: ";
//   cin>>n;

//   for(int row=1;row<=n;row++ )
//   {
//     for(char col='a';col<='e';col++)
//     {
//        cout<<col<<" ";
//     }
//     cout<<endl;
//   }
// }



//que9  nhi hua video s kra code

/*
1  2   3  4  5
6  7   8  9  10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   int count=1;
//   cout<<"Enter the input: ";
//   cin>>n;
//   for(int row=1;row<=n;row++)
//   {
//     for(int col=1;col<=n;col++)
//     {
//       cout<<count<<" ";
//       count++;
    
//     }
//     cout<<endl;
//   }
// }

//try it using akternate approach



//Day 8 Homework
// 4 4 4 4 4 4
// 4 4 4 4 4 4
// 4 4 4 4 4 4
// 4 4 4 4 4 4
// 4 4 4 4 4 4

//que1
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the input: ";
//   cin>>n;

//   for(int row=1;row<=n;row++)
//   {
//     for(int col=1;col<=n;col++)
//     {
//       cout<<"4 ";
//     }
//     cout<<endl;
//   }
// }

//que 2

// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25


// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the input: ";
//   cin>>n;

//   for(int row=1;row<=n;row++)
//   {
//     for(int col=1;col<=n;col++)
//     {
//       cout<<col*col<<" ";
//     }
//     cout<<endl;
//   }
// }



//que3

// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216


// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the input: ";
//   cin>>n;
//   for(int row=1;row<=n;row++)
//   {
//     for(int col=1;col<=n;col++)
//     {
//       cout<<col*col*col<<" ";
//     }
//     cout<<endl;
//   }
// }


//que4
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the input: ";
//   cin>>n;
//   for(int row=1;row<=n;row++)
//   {
//     for(char ch='F';ch<='K';ch++)
//     {
//       cout<<ch<<" ";
//     }
//     cout<<endl;
//   }
// }


//lecture 7

//que1
// *
// * *
// * * *
// * * * *
// * * * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the input: ";
//   cin>>n;

//   for(int row=1;row<=n;row++)
//   {
//     for(int col=1;col<=row;col++)
//     {
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
// }

//que2
// 1 
// 1 2
// 1 2 3 
// 1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the input: ";
//   cin>>n;
//   for(int row=1;row<=n;row++)
//   {
//     for(int col=1;col<=row;col++)
//     {
//       cout<<col<<" ";
//     }
//     cout<<endl;
//   }
// }


//que3
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5


// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the input: ";
//   cin>>n;
//   for(int row=1;row<=5;row++)
//   {
//     for(int col=1;col<=row;col++)
//     {
//       cout<<row<<" ";
//     }
//     cout<<endl;
//   }
// }


//que4
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int col=row;col>=1;col--)
//         {
//            cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


//que5

// a 
// b b
// c c c
// d d d d
// e e e e e


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=5;row++)
//     {
//         char name='a'+row-1;
//         for(int col=1;col<=row;col++)
//         {
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }


//que 6
// * * * * *
// * * * * 
// * * *
// * * 
// * *


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int col=5;col>=row;col--)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// que7
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2
// 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1;col<=n-row+1;col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }




//que8
// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//      for(int col=n;col>=n-row+1;col--)
//      {
//         cout<<col<<" ";
//      }
//      cout<<endl;
//     }
// }



//Day 9 homework
//que1
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// 1 2 3 4 5 6 7



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//      for(int col=1;col<=row;col++)
//      {
//         cout<<col<<" ";
//      }
//      cout<<endl;
//     }
// }


//que2
// A
// A B
// A B C
// A B C D
// A B C D E


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(char col='A';col<='A'+row-1;col++)
//         {
//           cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }



//que3

// 10
// 10 11
// 10 11 12
// 10 11 12 13 
// 10 11 12 13 14 
// 10 11 12 13 14 15


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int col=10;col<=10+row-1;col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


//que4

// A B C D
// A B C 
// A B 
// A 



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=n;row>=1;row--)
//     {
//      for(char col='A';col<='A'+row-1;col++)
//      {
//         cout<<col<<" ";
//      }
//      cout<<endl;
//     }
// }


//Lecture 8

//que1
//         * 
//       * *
//     * * *
//   * * * *
// * * * * *


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1;col<=n-row;col++)
//         {
//             cout<<"  ";
//         }
//         for(int col=1;col<=row;col++)
//         {
//             cout<<" *";
//         }
//         cout<<endl;
//     }

// }


//que 2
//       1
//     2 2
//   3 3 3
// 4 4 4 4


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1;col<=n-row;col++)
//         {
//             cout<<"  ";
//         }
//         for(int col=1;col<=row;col++)
//         {
//             cout<<row<<" ";
//         }

//         cout<<endl;
//     }
// }



//que3

//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1;col<=n-row;col++)
//         {
//             cout<<" ";
//         }
//             for(int col=1;col<=row;col++)
//             {
//                 cout<<col;
//             }
//             cout<<endl;
//         }
// }



//que4
//         A
//       A B 
//     A B C 
//   A B C D 
// A B C D E

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     char ch;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1;col<=n-row;col++)
//         {
//             cout<<" ";
//         }
//         for(ch='A';ch<='A'+row-1;ch++)
//         {
//             cout<<ch;
//         }
//         cout<<endl;
//     }

// }



//que5
//         1
//       2 1
//     3 2 1   
//   4 3 2 1
// 5 4 3 2 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the input: ";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
for(int col=row;col>=1;col--)
{
    cout<<col;
}
cout<<endl;
    }

}