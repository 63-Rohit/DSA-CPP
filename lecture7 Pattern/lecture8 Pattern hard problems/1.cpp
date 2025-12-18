//que1
// *
// * *
// * * *
// * * * *
// * * * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=1;row<=5;row++)
//     {
//         for(int col=1;col<=row;col++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


//que2
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=1;row<=5;row++)
//     {
//         for(int col=1;col<=row;col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


//que3
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=1;row<=5;row++)
//     {
//         for(int col=1;col<=row;col++)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }



//que4
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=1;row<=5;row++)
//     {
//         for(int col=row;col>=1;col--)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }



//que5
// a 
// b b
// c c c 
// d d d d
// e e e e e


// #include<iostream>
// using namespace std;
// int main()
// {

//     char col;
//     for(int row=1;row<=5;row++)
//     {
//         for(col=1;col<=row;col++)
//         {
//             char name='a'+row-1;
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }



//que6
// * * * * *
// * * * * 
// * * *
// * * 
// * 

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=5;row>=1;row--)
//     {
//         for(int col=row;col>=1;col--)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


//alternate way for this


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=5;row>=1;row--)
//     {
//         for(int col=1;col<=row;col++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


//alternate way
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row,col;
//     for(row=1;row<=5;row++)
//     {
//         for(col=1;col<=5-(row-1);col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



//que7
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2
// 1


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=5;row>=1;row--)
//     {
//         for(int col=1;col<=row;col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


//alternate way  using formula 5-(row-1)
// #include<iostream>
// using namespace std;
// int main()
// {
//    for(int row=1;row<=5;row++)
//    {
//     for(int col=1;col<=5-row+1;col++)
//     {
//         cout<<col<<" ";
//     }
//     cout<<endl;
//    }
// }


//que8
// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=5;row>=1;row--)
//     {
//         for(int col=5;col>=row;col--)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

//alternate way using formula
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=5;col>=5-row+1;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}