#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of an array:  ";
    cin >> size;

    int arr[size];
    cout << "Enter the element in an array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 35)
        {
            cout << i+1 << endl;
        }
    }

    return 0;
}
