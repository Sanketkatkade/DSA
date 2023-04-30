#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());
    return (rev == str);
}

int main()
{
    string str;
    cin >> str;
    bool result = isPalindrome(str);
    if (result)
    {
        cout << str << " is a palindrome" << endl;
    }
    else
    {
        cout << str << " is not a palindrome" << endl;
    }
    return 0;
}
