#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n] = {};
    int i = 0;

    for (i; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j + 1] <= arr[i])
            {
                if (arr[j + 1] == arr[i])
                {
                    int temp = arr[i + 1];
                    arr[i + 1] = arr[j + 1];
                    arr[j + 1] = temp;
                    i++;
                }
                else
                {
                    int temp = arr[i];
                    arr[i] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}