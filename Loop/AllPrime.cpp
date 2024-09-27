#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int range;
    cout << "Ente the range :";
    cin >> range;
    for (int i = 2; i <= range; i++)
    {
        bool flag = true;
        for (int j = 2; j < i - 1; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << i << endl;
        }
    }

    return 0;
}
