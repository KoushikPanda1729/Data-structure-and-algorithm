#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of row and column : ";
    cin >> n;
    int a;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
        {
            a = 1;
        }
        else
        {
            a = 0;
        }

        for (int j = 1; j <= i; j++)
        {
            cout << a;
            if (a == 1)
                a--;
            else
                a++;
        }
        cout << endl;
    }

    return 0;
}
