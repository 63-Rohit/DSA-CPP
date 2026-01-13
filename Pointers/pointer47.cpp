// lecture47 Pointers with character arrarys

#include<iostream>
using namespace std;
int main()
{
    char arr[5]="1234";
    char *ptr=arr;
    cout<<arr<<endl;
    cout<<ptr<<endl;

    cout<<(void*)arr;
    cout<<endl;
    cout<<(void*)ptr;

    char name='a';
    cout<<&name;
    cout<<endl;
    char *ptr1=&name;
    cout<<(void*)&name<<endl;
    cout<<(void*)ptr1<<endl;
}


