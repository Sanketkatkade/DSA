#include <iostream>
using namespace std;

void extractDigit(int x)
{
    int count = 0;
    while (x > 0)
    {
        int digit = x % 10;
        x /= 10;
        count++;
    }
    cout << count << endl;
}

int main()
{
    int x;
    cin >> x;
    extractDigit(x);
    return 0;
}