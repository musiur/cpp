#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int space = n - 1;

    // top
    for (int i = 0; i < n; i++)
    {
        for (int s = 1; s <= space; s++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        space--;
        cout << endl;
    }

    space = 0;
    // bottom
    for (int i = n; i > 0; i--)
    {
        for (int s = 1; s <= space; s++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "* ";
        }
        space++;
        cout << endl;
    }

    return 0;
}