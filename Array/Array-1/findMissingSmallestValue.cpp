#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size, flag = false;
    cout << "Enter the size of an array : ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements in the array in assending manner : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int missingValue = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != missingValue)
        {
            flag = true;
            break;
        }
        else
        {
            missingValue++;
        }
    }

    if (flag)
    {
        cout << "Missing value is : " << missingValue;
    }
    else
    {
        cout << "There is no missing value ";
    }

    return 0;
}
