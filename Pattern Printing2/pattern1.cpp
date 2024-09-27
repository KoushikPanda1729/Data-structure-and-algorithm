#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of row and column : ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int k = i-1; k >= 1; k--)
        {
            cout << " ";
        }

        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
