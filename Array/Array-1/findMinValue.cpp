#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements in array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }
    cout << "Min value is : " << min;
    return 0;
}
