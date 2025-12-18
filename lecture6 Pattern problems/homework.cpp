//que1
/*
4 4 4 4 4
4 4 4 4 4
4 4 4 4 4
4 4 4 4 4
4 4 4 4 4
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=1;row<=5;row++)
//     {
//         for(int col=1;col<=5;col++)
//         {
//             // cout<<"4"<<" ";
//             cout<<"4 ";
//         }
//         cout<<endl;
//     }
// }



//que2
// 1 4 9 16 25 
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=6;i++)
//     {
//         for(int j=1;j<=5;j++)
//         {
//             cout<<j*j<<" ";
//         //    cout<<j; 
//         }
//         cout<<endl;
//     }
// }




//que3
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=6;j++)
//         {
//             cout<<j*j*j<<' ';
//         }
//         cout<<endl;
//     }
// }



//que4
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K


#include<iostream>
using namespace std;
int main()
{
    char col;
    for(int row=1;row<=5;row++)
    {
       for(col='F';col<='K';col++)
       {
        cout<<col<<" ";
       }
       cout<<endl;
    }
}


