//que1
//         * 
//       * *
//     * * *
//   * * * *
// * * * * *


// #include<iostream>
// using namespace std;
// int main()
// {
//    for(int row=1;row<=5;row++)
//    {
//     for(int col=1;col<=5-row;col++)
//     {
//         cout<<"  ";
//     }
//     for(int col=1;col<=row;col++)
//     {
//         cout<<" *";
//     }
//     cout<<endl;
//    }
// }


//User input for this question
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Input the number: ";
//     cin>>n;
//    for(int row=1;row<=n;row++)
//    {
//     for(int col=1;col<=n-row;col++)
//     {
//         cout<<" ";
//     }
//     for(int col=1;col<=row;col++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
//    }
// }



//que2
//       1
//     2 2
//   3 3 3
// 4 4 4 4

// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the number: ";
// cin>>n;
// for(int row=1;row<=n;row++)
// {
//     for(int col=1;col<=n-row;col++)
//     {
//        cout<<" ";
//     }
//     for(int col=1;col<=row;col++)
//     {
//         cout<<row;
//     }
//     cout<<endl;
// }
// }



//que3
//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1;col<=n-row;col++)
//         {
//            cout<<" ";
//         }
//         for(int col=1;col<=row;col++)
//         {
//           cout<<col;
//         }
//         cout<<endl;
//     }
// }



//que4

//         A
//       A B 
//     A B C 
//   A B C D 
// A B C D E



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     char col;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1;col<=n-row;col++)
//         {
//             cout<<" ";
//         }
//         for(col='A';col<='A'+row-1;col++)
//         {
//             cout<<col;
//         }
//         cout<<endl;
//     }
// }


//alternate way
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int row=1;row<=n;row++)
//     {
//         for(int col=1;col<=n-row;col++)
//         {
//             cout<<" ";
//         }
//         for(int col=1;col<=row;col++)
//         {
//             char name='A'+col-1;
//             cout<<name;
//         }
//         cout<<endl;
//     }
// }


//que5  
//         1
//       2 1
//     3 2 1   
//   4 3 2 1
// 5 4 3 2 1 

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
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


//que6   nhi hua ye

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=1;row<=5;row++)
//     {
//         for(int col=1;col<=5-row;col++)
//         {
//             cout<<" ";
//         }
//         for(int col=1;col<=row;col++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }