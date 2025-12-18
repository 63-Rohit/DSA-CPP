// lecture 29 Kadane's algorithm

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int>arr){
int prefix=0;
int totalsum=0;
int n=arr.size();

for(int i=0;i<n;i++)
{
    totalsum=totalsum+arr[i];
}
for(int i=0;i<n;i++)
{
  prefix=prefix+arr[i];
  int ans=totalsum-prefix;
   if(ans==prefix)
   {
    return 1;
   }
}
return 0;
}
int main()
{

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter the elemeent in an array";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }


    cout<<divide(v);

}