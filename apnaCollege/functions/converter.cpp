#include <iostream>
#include <cmath>

using namespace std;

int reverseNumber(int number)
{

    int reversedNumber = 0;

    while (number > 0)
    {
        reversedNumber = reversedNumber * 10 + number % 10;
        number = number / 10;
    }

    return reversedNumber;
}

int decimel_to_binary(int n)
{
    int ans = 1;
    while (n > 0)
    {
        ans = ans * 10 + n % 2;
        n /= 2;
    }

    return reverseNumber(ans) / 10;
}

int decimel_to_octal(int n)
{
    int ans = 1;
    while (n > 0)
    {
        ans = ans * 10 + n % 8;
        n /= 8;
    }

    return reverseNumber(ans) / 10;
}

int binary_to_decimel(int n)
{

    int sum = 0;
    int i = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * pow(2, i));
        n /= 10;
        i++;
    }

    return sum;
}

int octal_to_decimel(int n)
{

    int sum = 0;
    int i = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * pow(8, i));
        n /= 10;
        i++;
    }

    return sum;
}

int main()
{
    int number;
    cin >> number;
    cout << decimel_to_octal(number);
    return 0;
}