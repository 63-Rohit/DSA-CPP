// #include<iostream>
// using namespace std;

// int pow (int a,int b){
//     int ans=1;
//     for(int i=1;i<=b;i++)
//     {
//         ans=ans*a;
//     }
//     return ans;
// }
// int main()
// {


//     int n,powr;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<"Enter powr: ";
//     cin>>powr;

//     //Function Calling
//     cout<<pow(n);
// }




//Even or Odd programs
// #include<iostream>
// using namespace std;

// //1=> in even
// //0=>in odd

// int isEven(int n){
//     if(n%2!=0)
//     {
//         return 0;
//     }
//         return 1;
// }

// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     cout<<isEven(n);
// }



//Program for ncr

// #include<iostream>
// using namespace std;

// long factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }


// long long ncr(int n,int r){
//     int num=factorial(n);
//     int denom=factorial(r)*factorial(n-r);
//     int ans=num/denom;
//     return ans;

// }

// int main()
// {
//     int n,r;
//     cout<<"Enter the value of n and r: ";
//     cin>>n>>r;

//     cout<<"combination is: "<<ncr(n,r);

// }


//program for counting of a number using function
// #include<iostream>
// using namespace std;

// void printCounting(int n){
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<" ";
//     }
    // return 0;This is
    // return 1;This is
    // return -1This is
    // return ;//This is write
    
// }

// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
    
    //Function Calling

    // cout<<printCounting(n); it will give error because its return type is void=>means it does not return any value.cout is used to print values.
    //when you write cout<<printCounting(n); you are telling the compiler "Take whatever printCounting(n) returns and print it.".But since the function return nothing(void),the compiler throws an error.

//     printCounting(n);
// }



//Progran to write a prime a number using function

// #include<iostream>
// using namespace std;

//1=>Prime no.
//0=>Not a prime no.

// int isPrime(int n){

//     if(n<=1)
//     {
//         return 0;
//     }
//      for(int i=2;i<n;i++)
//     {
//      if(n%i==0)
//     {
      
//         return 0;

//      }
//      return 1;
//     }
// }

// int main()
// {
//     int num;
//     cout<<"Enter the num: ";
//     cin>>num;

//    cout<< isPrime(num);
// }


//homework 
//que1 







































//que3 Print fibonacci series using function
#include<iostream>
using namespace std;

int printFibonacci(int n){
    int a=0,b=1,c;
    for(int i=0;i<n;i++)
    {

        c=a+b;
        a=b;
        b=c;
    }

    return a;

}

    int main()
    {
        int num;
        cout<<"Enter the term: ";
        cin>>num;

       cout<< printFibonacci(num);


    }