<<<<<<< HEAD
<<<<<<< HEAD
// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"Enter n: ";
//    cin>>n;

//    for(int row=1;row<=n;row++)
//    {
//     for(int space=1;space<=n-row;space++)
//     {
//         cout<<" ";
//     }
//         for(int col=1;col<=row;col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//    }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//       for(int space=1;space<=n-row;space++)
//       {
//         cout<<" ";
//     }
//         for(int col=1;col<=row;col++)
//         {
//             cout<<row;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
 
//     for(int row=1;row<=n;row++)
//     {
//         for(int space=1;space<=n-row;space++)
//         {
//             cout<<" ";
//         }
//         for(int col=1;col<=row;col++)
//         {
//             cout<<col;
//         }
//         cout<<endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"Enter n: ";
//    cin>>n;

//    for(int row=1;row<=n;row++)
//    {
//     for(int space=1;space<=n-row;space++)
//     {
//       cout<<" ";
//     }
//     for(int col=1;col<=row;col++)
//     {
//         char ch='a'+col-1;
//         cout<<ch;
//     }
//     cout<<endl;
//    }
// }


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
//     cout<<"Enter n: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int space=1;space<=n-row;space++)
//         {
//             cout<<" ";
//         }
//         for(int col=row;col>=1;col--)
//         {
//            cout<<col;
//         }
//         cout<<endl;
//     }
// }


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

//           5
//         5 4  
//       5 4 3
//     5 4 3 2
//   5 4 3 2 1       

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     for(int row=1;row<=n;row++)
//     {
//         for(int space=1;space<=n-row;space++)
//         {
//             cout<<" ";
//         }
//             for(int col=n;col>=n-row+1;col--)
//             {
//                 cout<<col;
//             }
//             cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"Enter row: ";
//    cin>>n;

//    for(int row=1;row<=n;row++)
//    {
//     for(int space=1;space<=n-row;space++)
//     {
//         cout<<" ";

//     }

//     for(int col=1;col<=row;col++)
//     {
//         char ch='A'+col-1;
//         cout<<ch;
//     }
//     cout<<endl;
//    }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;


//     for(int row=1;row<=n;row++)
//     {
//         for(int space=1;space<=n-row;space++)
//         {
//             cout<<" ";
//         }
//         for(int col=row;col>=1;col--)
//         {
//             cout<<col;
//         }
//         cout<<endl;
//     }
// }


// Prtint 1 to 10 using do while loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
// int i=1;
//     do{
//         cout<<i<<" ";
//       i++;
//     }
//     while(i<=10);
// }

// Print sum of natural number using  do while loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int sum=0;
//     int i=1;

//   do{
//     sum=sum+i;
//      cout<<sum;
//      i++;
//   }
//   while(i<=n);
// }
=======
=======
>>>>>>> bf17da043a40b7071558f01fa6ec012ba906802f
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbers: ";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<row ;
        }
        cout<<endl;
    }
}
<<<<<<< HEAD
>>>>>>> bf17da043a40b7071558f01fa6ec012ba906802f
=======
>>>>>>> bf17da043a40b7071558f01fa6ec012ba906802f
