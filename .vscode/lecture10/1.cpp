// #include<iostream>
// using namespace std;
// int main()
// {
//     //ans will come according to higher precedence
//   cout<<13/2<<endl;;
//   cout<<13.7/2<<endl;
//   cout<<13.2*4<<endl;
// }




//Pre increment post increment and pre decrement and post decrement example


// //Pre increment example

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     cout<<++a<<endl;//11
//     cout<<a<<endl;//11
// }




//Post increment example
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     cout<<a++<<endl;;
//     cout<<a<<endl;
// }





//Pre decrement example
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     cout<<--a<<endl;//9
//     cout<<a<<endl;//9
// }




// //Post decrement example
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     cout<<a--<<endl;//10
//     cout<<a<<endl;//9
// }



//Comparison Operator
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the vakue of a : ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
// }

    //==
    // if(a==b)
    // {
    //     cout<<"yes";
    // }
    // else{
    //     cout<<"no";
    // }


    //a>b
    //    if(a>b)
    // {
    //     cout<<"yes";
    // }
    // else{
    //     cout<<"no";
    // }

    
    //a>b
//        if(a<b)
//     {
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
// }


//Logical Operator

// #include<iostream>
// using namespace std;
// int main()

// {
//     //Logical Operator
//     int a,b,c;
//     cout<<"Enter the value of a b and c: "<<endl;
//     cin>>a>>b>>c;

//     if(a>b&&a>c)
//     {
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }
  
// }


//To check a charcter is a vowel or consonant
// #include<iostream>
// using namespace std;
// int main()
//  {
//     char ch;
//     cout<<"Enter a charcter: ";
//     cin>>ch;
//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
//     {
//         cout<<"Voewel";
//     }
//     else{
//         cout<<"not a vowel";
//     }
// }




//Code to print a greatest number among three numbers using logical operators
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     cout<<"Enter the value of  c: ";
//     cin>>c;

//     if(a>b&&a>c)
//     {
//         cout<<"Greatest number is a ";
//     }
//     else if(b>a&&b>c)
//     {
//         cout<<"Greatest number is b";
//     }

//     else{
//         cout<<"Greatest number is c ";
//     }
//     return 0;
// }

//Using ternary operator

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,a,b,c;
//     cout<<"Enter three numbers a,b and c: ";
//     cin>>a>>b>>c;

//     int greatest=(a>=b&&a>=c)?a:(b>=a&&b>=c)?b:c;

//     cout<<"Greatest number is: "<<greatest;
//     return 0;

// }



//Bitwise Operator

#include<iostream>
using namespace std;
int main()
{
 
//Bitwise Operator
int ans=2&3;
int anss=2|3;
int answer=2^3;
cout<<ans<<endl;
cout<<anss<<endl;
cout<<answer<<endl;
}