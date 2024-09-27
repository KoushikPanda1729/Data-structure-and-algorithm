#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int searchElement;
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;

    cout << "Enter the search element : ";
    cin >> searchElement;

    int arr[size];
    int flag = 0;
    cout << "Enter elements in an array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == searchElement)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "Search element find successfully";
    }
    else
    {
        cout << "Search element find Unsuccessfully";
    }

    return 0;
}
