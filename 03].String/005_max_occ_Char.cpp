#include <iostream>
using namespace std;

char getMaxOccChar(string s)
{
    int arr[26] = {0};
    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string s;
    cin >> s;
    char c = getMaxOccChar(s);
    cout << c << endl;
    return 0;
}

