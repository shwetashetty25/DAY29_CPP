//6. write a recusrive function int factorial of a given number n.
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;
    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        cout << "The factorial of " << number << " is: " << factorial(number) << endl;
    }

    return 0;
}