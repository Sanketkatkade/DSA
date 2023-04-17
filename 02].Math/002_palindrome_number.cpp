#include <iostream>
using namespace std;

bool checkPalindrome(int x)
{
    int rev = 0;
    int temp = x;
    
    while (temp > 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    return (rev == x);
}

int main()
{
    int x;
    cin >> x;
    if (checkPalindrome(x))
    {
        cout << x << " is a palindrome number." << endl;
    }
    else
    {
        cout << x << " is not a palindrome number." << endl;
    }
    return 0;
}