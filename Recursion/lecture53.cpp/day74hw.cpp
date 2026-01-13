// Day 74/180 4 problems in One shot
 
// 2: Power of 4


// 1: Sum of cubes of N natural numbers using Recursion.
// #include<iostream>
// using namespace std;
// int sumCube(int n)
// {
    //     if(n==1)
    //     {
        //         return 1;
        //     }
        
        //     // recursive function call
        //     return n*n*n+sumCube(n-1);
        // }
        // int main()
        // {
            //     int n;
            //     cout<<"enter n: ";
            //     cin>>n;
            //     // function call
            //     cout<<sumCube(n);
            // }


        // 3: Given a Number N, check whether it is prime or not using Recursion.
        #include<iostream>
        using namespace std;
        bool prime(int i,int n)
        {
            // Base case
            if(n==1)
            {
                return 0;
            }

            if(n%i==0)
            {
                return -1;
            }
            else{
              return 1;
            }
        }
        int main()
        {
            int n;
            cout<<"Enter the input: ";
            cin>>n;
            // calling function
            prime(2,11);

        }