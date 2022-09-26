#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {};

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int index = -1;

    // linear search algorithm
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }

    cout << index;

    return 0;
}