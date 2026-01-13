//que 1 Take an input n from the user and create a pattern like below for n=5,we have output like this

//           1
//         2 1
//       3 2 1
//     4 3 2 1
//   5 4 3 2 1      

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the numbers: ";
//     cin>>n;
//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1;col<=n-row;col++)
//         {
//             cout<<"  ";

//         }
//         for(int col=row;col>=1;col--)
//         {
//            cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }



//que2 
//         A
//       B B
//     C C C
//   D D D D  
// E E E E E      


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int space=1;space<=n-row;space++)
//         {
//            cout<<" ";
//         }
//         for(int col=1;col<=row;col++)
//         {
//             char ch='a'+row-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }

//que3 

//           5
//         5 4  
//       5 4 3
//     5 4 3 2
//   5 4 3 2 1        


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int space=1;space<=n-row;space++)
        {
            cout<<" ";
        }
            for(int col=n;col>=n-row+1;col--)
            {
                cout<<col;
            }
            cout<<endl;
    }
}



//que 4
//         E
//       E D
//     E D C
//   E D C B
// E D C B A

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=1;row<=5;row++)
//     {
//         for(int col=1;col<=5-row;col++)
//         {
//             cout<<"  ";
//         }
//         for()
//     }
// }