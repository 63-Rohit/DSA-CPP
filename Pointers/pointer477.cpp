// Pass buy value

// #include<iostream>
// using namespace std;

// void swapping(int *p1,int *p2){//Pass  by value
//   int temp=*p1;
//   *p1=*p2;
//   *p2=temp;

// }
// int main()
// {
//   int first=10;
//   int second=20;
//   swapping(&first,&second);
//   cout<<first<<" "<<second;
// }

// Reference variable=>toh ek h location ko multiple naam denna is called rference variable.

#include<iostream>
using namespace std;
int main()
{
  // Reference variable
  int num=10;
  int &temp=num;//num and temp both are same because it is a reference variable.
  cout<<temp<<endl;;
  temp++;
  cout<<num<<endl;
  // proof of num and temp are same,if address of both num and temp come same then i can say that num and temp are same.
  cout<<&num<<endl;
  cout<<&temp<<endl;
}


// vector,string reference help
// int arr,char arr pointer ki help se