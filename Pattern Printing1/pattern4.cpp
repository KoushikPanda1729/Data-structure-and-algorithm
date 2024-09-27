#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of row and column : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a += 2;
        }
        cout << endl;
    }

    return 0;
}
