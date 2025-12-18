// que1 Missing and repeating

#include<iostream>
using namespace std;
int main()
{
    int arr[4];
    int originalsum=0;
    int n=arr.size();
for(int i=0;i<=n;i++) 
{
   originalsum=originalsum+i;
}   

int tempsum=0;
for(int i=0;i<=n;i++)
{
 tempsum=tempsum+arr[i];
}

cout<<originalsum-tempsum;

}