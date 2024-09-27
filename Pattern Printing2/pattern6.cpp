#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the lines : ";
    cin >> n;
    for (int q = 1; q <= n * 2 + 1; q++)
    {
        cout << q;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;

        for (int j = n; j >= i; j--)
        {
            cout << a;
            a++;
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << " ";
            a++;
        }
        for (int j = n; j >= i; j--)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }

    return 0;
}
