#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the lines : ";
    cin >> n;
    for (int q = 1; q <= n * 2 + 1; q++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 2; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << " ";
        }
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
