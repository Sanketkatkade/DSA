#include <iostream>
using namespace std;

int countDigit(int x)
{
    int count = 0;
    while (x > 0)
    {
        int digit = x % 10;
        x /= 10;
        count++;
        
    }
    return count;
}

int main()
{
    int x;
    cin >> x;
    int res = countDigit(x);
    cout << res << endl;
    return 0;
}