// 1
// 1 2 
// 1 2 3 
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// 1 2 3 4 5 6 7

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=1;row<=7;row++)
//     {
//         for(int col=1;col<=row;col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }



//que2
// A
// A B
// A B C
// A B C D
// A B C D E


// #include<iostream>
// using namespace std;
// int main()
// {
//     char col;
//     for(int row=1;row<=5;row++)
//     {
//         for(col='A';col<='E';col++)
//         {
//            cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


//que3
// 10
// 10 11
// 10 11 12
// 10 11 12 13
// 10 11 12 13 14
// 10 11 12 13 14 15


// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=1;row<=6;row++)
//     {
//         for(int col=1;col<=row;col++)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


//que4
// A B C D
// A B C 
// A B 
// A 


#include<iostream>
using namespace std;
int main()
{
    char col;
    for(int row=4;row>=1;row--)
    {
        for(col='A';col<='D';col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}