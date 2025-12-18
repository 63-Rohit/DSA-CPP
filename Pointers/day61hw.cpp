// Day 61/180 Pointers in C++

// que1)What is a Symbol Table and learn about it.
// que2)
// Second Problem

// int main()
// {
//    int num = 10;
//    int *p = &num;


//    // Increment num variable by 5 with the help of Pointer p
//    // Don't do num = num+5;
//    // Try to change it with the help of *p


// }

#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *p = &num; // store the address of num in pointer p

    // Increment num by 5 using the pointer
    *p = *p + 5;

    cout << "Updated value of num: " << num << endl;

    return 0;
}
