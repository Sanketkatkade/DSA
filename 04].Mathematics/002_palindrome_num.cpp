#include <iostream>
using namespace std;

bool checkPalindrome(int x)
{
    string s = to_string(x);
    int start = 0;
    int end = s.size() - 1;
    while (start <= end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    int res = stoi(s);
    return (x == res);
}

int main()
{
    int x;
    cin >> x;
    bool result = checkPalindrome(x);
    if (result)
    {
        cout << "The given number is palindrome" << endl;
    }
    else
    {
        cout << "The given number is not palindrome" << endl;
    }
    return 0;
}