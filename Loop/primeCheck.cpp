#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    bool flag = true;
    cout << "Enter the number to check Prime :" << endl;
    cin >> n;
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (n == 1)
    {
        cout << "1 is not prime not composite";
    }
    else if (flag == true)
    {
        cout << n << " is prime number ";
    }
    else
    {
        cout << n << " is composite number ";
    }

    return 0;
}
