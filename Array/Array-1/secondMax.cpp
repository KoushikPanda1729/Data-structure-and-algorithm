#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements in an arrya : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max2 && arr[i] != max)
        {
            max2 = arr[i];
        }
    }

    cout << "Max value is : " << max << endl;
    cout << "second max value is : " << max2;

    return 0;
}
