#include <iostream>
using namespace std;

int main()
{
    int number = 53;
    int armgstrongNumber = 0;
    int temp = number;

    while (number > 0)
    {
        int remainder = number % 10;
        armgstrongNumber = armgstrongNumber + remainder * remainder * remainder;
        number = number / 10;
    }

    cout << armgstrongNumber << endl;

    if (temp == armgstrongNumber)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }
    return 0;
}