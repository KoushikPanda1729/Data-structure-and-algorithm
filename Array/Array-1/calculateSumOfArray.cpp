#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;

    int arr[size];
    cout << "Enter the element in the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "The sum of elements is : ";
    cout << sum;

    return 0;
}
