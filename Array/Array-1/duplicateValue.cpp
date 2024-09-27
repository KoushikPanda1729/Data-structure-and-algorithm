#include <iostream>
using namespace std;

int main()
{
    int size;
    int flag = false;
    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements in array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "There is duplicate value exists ";
    }
    else
    {
        cout << "There is no duplicate value ";
    }

    return 0;
}
