#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    int arr[size];

    cout << "Enter the size of an array : ";
    cin >> size;

    cout << "Enter the elements in an arrya : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    cout << "Max value is : ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;

    return 0;
}
