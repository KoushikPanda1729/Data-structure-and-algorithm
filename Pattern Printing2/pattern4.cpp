#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of row and column : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {

            cout << "*";
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
