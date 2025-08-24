#include <iostream>
#include <climits>
using namespace std;

int mindigit(int number, int minimum)
{
    if (number == 0)
        return minimum;
    minimum = min(minimum, number % 10);
    minimum = mindigit(number / 10, minimum);
    return minimum;
}

int main()
{
    // For min number finding we can use INT_MAX and Vice-versas.
    // 1. Logic using the min() and max() function.
    // 2. Using if-else statement.
    // 3. Using recursion.
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    int minimum = INT_MAX;
    // 1. Logic
    // while (number != 0)
    // {
    //     minimum = min(minimum, number % 10);
    //     number /= 10;
    // }
    //  TC :- O(d) and SC :- O(1

    // 2. 2nd Logic using Recursion
    cout << "Minimum number is: " << mindigit(number, minimum) << endl; //  TC :- O(d) and SC :- O(d)

    // In case of If-else:- //  TC :- O(d) and SC :- O(1
    return 0;
}