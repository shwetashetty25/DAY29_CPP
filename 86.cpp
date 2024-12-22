// 5.write a program to demonstrate a function overloading by creating the functions named max: int max(int a, int b)to find the largest of two integers. double max(double a , double b) to find the largest of two integers.
#include <iostream>
using namespace std;
int max(int a, int b)
{
    return (a > b) ? a : b;
}
double max(double a, double b)
{
    return (a > b) ? a : b;
}
int main()
{
    int int1, int2;
    double double1, double2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "The largest integer is: " << max(int1, int2) << endl;
    cout << "Enter two doubles: ";
    cin >> double1 >> double2;
    cout << "The largest double is: " << max(double1, double2) << endl;
    return 0;
}