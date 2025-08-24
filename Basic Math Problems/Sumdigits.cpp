#include <iostream>
using namespace std;

int sumfunction(int number)
{
    if (number == 0)
        return 0;
    return (number % 10) + sumfunction(number / 10);
}

int main()
{
    // Now here are 3 Ways to design this particular code.

    // 1. Using the loop and concept of % and / operator.
    // Here % gives remainder and / gives the quoitent.
    // TC :- O(logN)  and SC :- O(1)

    // 2. Using recursion and concept of % and / operator.
    // TC :- O(logN)  and SC :- O(1)

    // 3. By converting the Number into string and extracting the
    //    characters one by one.

    int number;
    cout << "Enter a number: " << endl;
    cin >> number;

    // 1. Logic of normal loop.

    // int sum = 0;
    // while (number != 0)
    // {
    //     sum += number % 10;
    //     number /= 10;
    // }
    // cout << "Total is: " << sum << endl;

    // 2. Logic using Recursion.
    // cout << "Total is: " << sumfunction(number) << endl;

    // 3. Lets Have a look at number to string conversion.
    int sum = 0;
    string s = to_string(number);
    for (char ch : s)
        sum += ch - '0';
    cout << "Total is: " << sum << endl;
    return 0;
}
