#include <iostream>
using namespace std;

int main()
{
    int size, product = 1;
    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements in the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }
    cout << "Product of all elements in array is : " << product;

    return 0;
}
