//Loops are used to repeat tasks more than one time.

//for Loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int count=1;count<=5;count++)
//     {
//         cout<<"Coder Army <<endl";
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     char e[]="hello";
//     for(int i=1;i<=10;i++)
//     {
//         cout<<"Hello"<<endl;
//     }
// }




//code for printing the numbers from 1 to 5
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         cout<<i<<endl;
//     }
// }

//code for printing squares from 1 to 30
// #include<iostream>
// using namespace std;
// int main()
// {
    
//     for(int i=1;i<=30;i++)
//     {
//         cout<<i*i<<endl;
//     }
// }

//code for printing natural numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
    
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<endl;
//     }
// }


//code for printing all even numbers upto 20
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     {
        
//             for(int n=2;n<=20;n++)
//             {
//                 if(n%2==0)
//                 {
//                 cout<<n<<endl;
//             }
            
//         }
//     }
// }

//or to print only even number upto 20
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=2;i<=num;i=i+2)
    {
        cout<<i<<endl;
    }
}