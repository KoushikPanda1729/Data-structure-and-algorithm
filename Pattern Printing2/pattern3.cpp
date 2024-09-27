#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Ener the number of lines : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int q = i-1; q >= 1; q--)
        {
            cout << q;
        }

        cout << endl;
    }

    return 0;
}
