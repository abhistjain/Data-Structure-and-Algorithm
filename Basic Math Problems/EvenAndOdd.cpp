#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;

    // 1. We can use if-else where we will check divide by 2
    // TC :- O(1) and SC:- O(1)
    if (number % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    int number1;
    cout << "Enter a number: " << endl;
    cin >> number1;

    // 2. Bitwise & operator
    // TC :- O(1) and SC:- O(1)
    if ((number1 & 1) == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    return 0;
}