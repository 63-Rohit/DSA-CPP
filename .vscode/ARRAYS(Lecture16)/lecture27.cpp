// Standard Template LLibrary

#include<iostream>
#include<vector>
using namespace std;
int main()
{

    //create a vector,declare
    vector<int>v;
    vector<int>v1(5,1);
    //size and capacity of a vector
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;
    
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);

    //Update value
    v[1]=5;
    cout<<"size of v1: "<<v.size()<<endl;
    cout<<"capacity of v1: "<<v.capacity()<<endl;
    v1.push_back(8);
    cout<<"size of v1: "<<v.size()<<endl;
    cout<<"capacity of v1: "<<v.capacity()<<endl;

    vector<int>v3={1,2,3,4,5};
    cout<<v3.size();


    //Delte value from a vector
    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(42);
    vnew.push_back(86);

    v.pop_back();
    cout<<"size of vnew: "<<vnew.size()<<endl;
    cout<<"capacity of vnew: "<<vnew.capacity()<<endl;


    //deleting element from a particular index in a vector
    vnew.erase(vnew.begin()+1);
    cout<<"size of v1: "<<v.size()<<endl;
    cout<<"capacity of v1: "<<v.capacity()<<endl;

    for(int i=0;i<vnew.size();i++)
    {
        cout<<vnew[i]<<" ";
    }

    cout<<endl;
    //insering element at articular index in a vector

    vnew.insert(vnew.begin()+1,50);
     for(int i=0;i<vnew.size();i++)
    {
        cout<<vnew[i]<<" ";
    }

    //clearing all elememnnt in a vector
    vnew.clear();
    cout<<"size of vnew: "<<vnew.size()<<endl;
    cout<<"capacity of vnew: "<<vnew.capacity()<<endl;



    //printing vector elements
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);


    //printing first element
    cout<<arr[0];
    cout<<arr.front()<<endl;

    //printing last element
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;
}