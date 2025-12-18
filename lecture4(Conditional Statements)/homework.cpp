// //que 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1,num2;
//     cout<<"Enter the first number: ";
//     cin>>num1;
//     cout<<"Enter the second number: ";
//     cin>>num2;

//     if(num1>num2)
//     {
//         cout<<"Number 1 is greater than number 2";
//     }
//     else{
//         cout<<"Number 2 is greater than number 1";
//     }
// }


//que2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"Enter the age: ";
//     cin>>age;
//     if(age>=18)
//     {
//         cout<<"Adult";
//     }
//     else{
//         cout<<"Teenager";
//     }
// }
//que3
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     if(n==1)
//     {
//         cout<<"January";
//     }
//     else if(n==2)
//     {
//         cout<<"Febrauary";
//     }
//      else if(n==3)
//     {
//         cout<<"March";
//     }
//      else if(n==4)
//     {
//         cout<<"April";
//     }
//      else if(n==5)
//     {
//         cout<<"March";
//     }
//      else if(n==6)
//     {
//         cout<<"June";
//     }
//      else if(n==7)
//     {
//         cout<<"JUly";
//     }
//      else if(n==8)
//     {
//         cout<<"August";
//     }
//      else if(n==9)
//     {
//         cout<<"September";
//     }
//      else if(n==10)
//     {
//         cout<<"October";
//     }
//      else if(n==11)
//     {
//         cout<<"November";
//     }
//      else if(n==12)
//     {
//         cout<<"December";
//     }

// }

// //que4
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=20;i++)
//     {
//         cout<<"India will win the 2026 worldcup";
//     }
// }


// //Loops Homewoork

// que1
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=20;i++)
//     {
//         cout<<"India will win the 2026 worldcup"<<endl;
//     }
// }


//que2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1;i<=n;i=i+2)
//     {
//         cout<<i<<endl;
//     }
// }


// or


// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"Enter the number: ";
//    cin>>n;
//    for(int i=1;i<=20;i++)
//    {
//     if(i%2!=0)
//     {
//        cout<<i<<endl;
//     }
//    }
// }

//que3
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        if(i%4==0)
        cout<<i<<endl;
    }

    
}