// #include<iostream>
// using namespace std;
// int main()
// {

//     string s="Rohit";
//     int start=0;
//     int end=s.size()-1;

//     while(start<end)
//     {
//         // swap(s[start],s[end]);
//         char temp=s[start];
//         s[start]=s[end];
//         s[end]=temp;
//         start++;
//         end--;
//     }
//     cout<<s;
// }


// calculate size of string withou s.size() function


// #include<iostream>
// using namespace std;
// int main()
// {
//     string s="Rohit";
//    int  size=0,end=s.size()-1;
//     while(s[size]!='\0')
//     {
//         size++;

//     }
//     cout<<size<<" ";
// }


// Check wheteher a string is a palindrome or not

#include<iostream>
using namespace std;
int main()
{

string s="naman";

int start=0;
int end=s.size()-1;

while(start<end)
{
    if(s[start]!=s[end])
    {
        cout<<"Not a palindrome string";
        return 0;
    }
    else{

        start++;
        end--;
    }
    
    }
    cout<<"palindrome string";
}