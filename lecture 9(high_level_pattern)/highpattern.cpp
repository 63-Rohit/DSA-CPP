//         *
//       * * *
//     * * * * *    
//    * * * * * * *
// * * * * * * * * *



// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the input: ";
//   cin>>n;
//   for(int row=1;row<=n;row++)
//   {
//     for(int col=1;col<=n-row;col++)
//     {
//       //space print
//       cout<< " " ;
//     }
//     for(int col=1;col<=2*row-1;col++)
//     {
//       //*print
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }



//que 2

//          1
//        1 2 1        
//      1 2 3 2 1
//    1 2 3 4 3 2 1
//  1 2 3 4 5 4 3 2 1


// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the input: ";
// cin>>n;

// for(int row=1;row<=n;row++)
// {
//     for(int col=1;col<=n-row;col++)
//     {
//         cout<<" ";
    
//     }
    
//     for(int col=1;col<=row;col++)
//     {
//         cout<<col<<" ";
//     }
//     for(int col=row-1;col>=1;col--)
//     {
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }
// }



//que3

// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;
   
//     for(int row=n;row>=1;row--)
//     {
//         for(int col=1;col<=n-row;col++)
//         {
//             cout<<"  ";
//         }
//         for(int col=1;col<=2*row-1;col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


//que4  ye nhi hua

// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(int row=n;row>=1;row--)
//     {

//         //print *
        
//     for(int col=1;col<=row;col++)
//     {
//         cout<<"* ";
//     }

//         //print space
//         for(int col=1;col<=2*n-2*row;col++)
//         {
//             cout<<" ";
//         }


//         //print *

//         for(int col=1;col<=row;col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
        


//     for(int row=1;row<=n;row++)
//     {

//         //print *
        

//     for(int col=1;col<=row;col++)
//     {
//         cout<<"* ";
//     }

//         //print space
//         for(int col=1;col<=2*n-2*row;col++)
//         {
//             cout<<"  ";
//         }


//         //print *

//         for(int col=1;col<=row;col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
        

//     }
// }

// }




//que 5







// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout<<"Enter the input: ";
//   cin>>n;

//   for(int row=1;row<=n;row++)
//   {
//     //*print
//   for(int col=1;col<=row;col++)
//    {
//      cout<<"* ";
//    }

//     //space print
//     for(int col=1;col<=2*n-2*row;col++)
//     {
//         cout<<"  ";
//     }

//     //*print
//     for(int col=1;col<=row;col++)
//     {
//        cout<<"* ";
//     }
//   cout<<endl;

//   for(int row=n-1;row>=1;row--)
//   {
//     //*print
//   for(int col=1;col<=row;col++)
//    {
//      cout<<"* ";
//    }

//     //space print
//     for(int col=1;col<=2*n-2*row;col++)
//     {
//         cout<<"  ";
//     }

//     //*print
//     for(int col=1;col<=row;col++)
//     {
//        cout<<"* ";
//     }
//   cout<<endl;
//   }
// }
// }




//que6
   