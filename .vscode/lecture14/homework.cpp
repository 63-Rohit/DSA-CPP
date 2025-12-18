//que 1 Find the cube of a number using function.

// #include<iostream>
// using namespace std;
// int fun(int n){
//     return n*n*n;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

// // Function Calling
//     cout<<fun(n);

// }



//que 2  Reverse a number using function constraints -5000<=n<=5000

// #include<iostream>
// using namespace std;
// int reverse(int x){
//     int rem,ans=0;
//     while(x>0){

//         rem=x%10;
//         x=x/10;
//         ans=ans*10+rem;
//     }
// }
// int main()
// {
//    int n;
//    cout<<"Enter the number: ";
//    cin>>n;

   //Calling reverse function

//    cout<<reverse(n);
// }



//que 3 There are three numbers a,b,c Put the value of a into b,put value of b into c,put value of c into a.Do it using function.

#include<iostream>
using namespace std;

void fun(){
    int a,b,c;
    a=b;
    b=c;
    c=a;
    cout<<a<<b<<c;
}
int main()
{

    int x,y,z;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<"Enter the value of z: ";
    cin>>z;

    //Calling function
    cout<<fun(x);
    cout<<fun(y);
    cout<<fun(z);
}


//que4  Swap two numbers a and b without using extra variables.Range of -10000<=a,b<=100000






//que5 Print hello coder army n times using function


// #include<iostream>
// using namespace std;

// void fun(){
//     int n;
//     for(int i=1;i<=n;i++)
//     {

//         cout<<"Hello Coder Army";
//     }

// }
// int main()
// {
    

    //function calling
//     fun();

// }




//que 6  Given two numbers n,r.Find ncr(Combination).Use function here.
#include<iostream>
using namespace std;

int factorial(int n){
    long factt=1;
    for(int i=1;i<=n;i++)
    {
        factt=factt*i;
    }
    return factt;
}


    long long ncr(int n,int r){
        return factorial(n)/factorial(n-r)*factorial(r);
    }
  


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    

}







//Code for npr using function