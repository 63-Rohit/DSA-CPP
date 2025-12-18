#include<iostream>
using namespace std;

//   But i want to make only one function call and solve this problem.



void fun3(int n)
{
    // Base case
     if(n==0)
    {
        cout<<"Happy birthday";
        return;
    }
    cout<<n<<" days left for birthday\n";
    fun3(n-1);
}




int main()
{
    int n=3;
    //Iterative approach
    // for(int i=n;i>0;i--)
    // {
    //     cout<<i<<" days left for birthday\n";
    // }
    // cout<<"Happy Birthday";

    // with the help of function
      fun3(8);
      

}