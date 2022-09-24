#include <iostream>
using namespace std;

int main()
{
    int number = 15200;

    int reversedNumber = 0;

    while (number > 0)
    {
        reversedNumber = reversedNumber * 10 + number % 10;
        number = number / 10;
    }

    cout << reversedNumber << endl;

    return 0;
}