// Check palindrome using recursion

// #include<iostream>
// using namespace std;

// bool checkpal(string str,int start,int end)
// {
//     // Base condition
//     if(start>=end)
//     {
//         return 1;
//     }
//     // not matched
//     if(str[start]!=str[end])
//     {
//         return 0;
//     }
//     // matched
//     else{

//         return checkpal(str,start+1,end-1);
//     }
// }
// int main()
// {

//     // Check palindrome
//     string str="naman";
//     cout<<checkpal(str,0,4)<<endl;
// }



// // que 2 Count Vowels using recursion
// #include<iostream>
// using namespace std;

// int count(string str,int index)
// {
//     // Base condition
//     if(index==-1)
//     {
//        return 0;
//     }
//     // Vowel hoga
//     if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
//     {
//         return 1+count(str,index-1);
//     }
//     // vowel nhi hoga
//     else{
//         return count(str,index-1);
//     }
// }
// int main()
// {
//     // count vowels
//   string str="rohit";
//   cout<<count(str,4)<<endl;
// }


// que3 Reverse a string using recursion
// #include<iostream>
// using namespace std;
// void revString(string &str,int start,int end)
// {
//     // Base condition
    
//     if(start>=end)
//     {
//         return;
//     }

//     char c=str[start];
//     str[start]=str[end];
//     str[end]=c;

// // Recursive function call
//     revString(str,start+1,end-1);
// }
// int main()
// {
//    string str="rohit";
// //    calling function
//    revString(str,0,4);
//    cout<<str;
// }


// que4 Convert Loowercase to Uppercase
#include<iostream>
using namespace std;
void lowertoUpper(string &str,int index)
{
    // Base Case
    if(index==-1)
    {
      return ;
    }

    str[index]='A'+str[index]-'a';
    // recursive function call
    lowertoUpper(str,index-1);

}
int main()
{
  string str="rohit";
//   Calling function
  lowertoUpper(str,4);
  cout<<str;
}