//Day 12 Homework
//que1
//  Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. 

#include<iostream>
using namespace std;
int main()
{
    int temp;
    cout<<"Enter the temperature: ";
    cin>>temp;

    if(temp>=71&&temp<=89)
    {
        cout<<"yes the temperature is suitable for swimming";
    }
    else{
        cout<<"no";
    }
}



//que 2
// Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//  if(n%2==0&&n>0)
//  {
//     cout<<"yes";
//  }
//  else
//  {

//      cout<<"no";
//  }


// }


//que3

// Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"Enter the age: ";
//     cin>>age;

//     if(age>=13 && age<=19)
//     {
//         cout<<"Teenager";
//     }
//     else{
//         cout<<"no";
//     }


// }



//que4
// Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,a,b,c;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     cout<<"Enter the value of c: ";
//     cin>>c;

//     if(a>b||a>c)
//     {
//       cout<<" a is greatest among a b and c";
//     }
//     else{
//         cout<<"no";
//     }


// }