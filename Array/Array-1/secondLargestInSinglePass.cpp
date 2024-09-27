#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int size;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int flag = false;
    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements in an array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN)
    {
        cout << "There is no second largest elements";
    }
    else
    {
        cout << "Max 1 : " << max1 << endl;
        cout << "Max 2 : " << max2 << endl;
    }

    return 0;
}
