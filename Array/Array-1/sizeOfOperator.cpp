#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size;
    for (int i = 0; i < size; i++)
    {
        cout << &arr[i] << endl;
    }

    return 0;
}
