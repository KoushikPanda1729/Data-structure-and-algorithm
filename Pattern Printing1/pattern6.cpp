#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of row and column : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k <= n - 1; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
