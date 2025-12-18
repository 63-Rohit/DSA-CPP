// lecture 66 Tower of Hanoi (Magic of Recursion)
#include <iostream>
#include <cmath>
using namespace std;

// Tower of Hanoi function
void TOH(int n, char source, char helper, char dest)
{
    // Base case
    if (n == 1)
    {
        cout << "Move disk 1 from " << source << " to " << dest << endl;
        return;
    }
    // Move n-1 disks from source to helper
    TOH(n - 1, source, dest, helper);

    // Move nth disk from source to dest
    cout << "Move disk " << n << " from " << source << " to " << dest << endl;

    // Move n-1 disks from helper to dest
    TOH(n - 1, helper, source, dest);
}

int main()
{
    int N;
    cout << "Enter number of disks: ";
    cin >> N;

    // Calling function with rods A, B, C
    TOH(N, 'A', 'B', 'C');

    // Total number of moves
    cout << "Total moves: " << pow(2, N) - 1 << endl;

    return 0;
}
