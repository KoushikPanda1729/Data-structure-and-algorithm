#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int digit, r, h = 0, count = 0;
    cout << "Enter the digit :";
    cin >> digit;

    while (digit != 0)
    {
        r = digit % 10;
        count++;
        h = h * 10 + r;
        digit /= 10;
    }
    cout << "Number of digit is : " << count << endl;
    cout << "Number of digit is : " << h << endl;

    return 0;
}
