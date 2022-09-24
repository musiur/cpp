#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= space; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        space--;
        cout << endl;
    }

    return 0;
}