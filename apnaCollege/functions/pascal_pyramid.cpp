#include <iostream>
using namespace std;

int findFactorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int nCr(int n, int r)
{
    int nCrResult = findFactorial(n) / ((findFactorial(n - r)) * findFactorial(r));

    return nCrResult;
}

int main()
{
    int n = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << 1;
        }
        else
        {
            for (int j = 0; j <= i; j++)
            {
                cout << nCr(i, j) << "   ";
            }
        }

        cout << endl;
    }

    return 0;
}