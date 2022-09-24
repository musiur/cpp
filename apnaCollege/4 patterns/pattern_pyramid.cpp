#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // cin >> n;
    int start = 1;
    int end = n * 2;
    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j <= start || j >= end)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        if (i <= n)
        {
            if (start < n)
            {
                start++;
                end--;
            }
        }
        else
        {
            start--;
            end++;
        }

        cout << endl;
    }
    return 0;
}