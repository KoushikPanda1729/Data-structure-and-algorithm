#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1, b = 1, sum = 0, range;

    cout << "Enter the range :";
    cin >> range;

    cout << a << endl
         << b << endl;
    int count = 2;
    while (count < range)
    {
        sum = a + b;
        a = b;
        b = sum;
        cout << sum << endl;
        count++;
    }
    // cout << b << endl;

    return 0;
}
