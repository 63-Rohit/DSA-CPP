
// q1 Peak index in amountain array
#include<iostream>
using namespace std;
class solution{
    public:
    int peakIndexMountainarray(int arr[]){


        int low=0;
        int high=arr.size()-1;
        int mid;

        while(low<=high)
        {
            // mid=low+(high-low)/2;

            mid=high+(low-high)/2;

            //Peak element
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
            {
                return mid;
            }

            //Right side move
            else if(arr[mid]>arr[mid-1])
            {
                low=mid+1;
            }


            //left sie move
            else{
                high=mid-1;
            }
        }
        return -1;//element not found

    }
};
