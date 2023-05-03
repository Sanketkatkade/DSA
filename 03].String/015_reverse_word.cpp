#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string reverse_str(string str)
{
    string result, sub;
    int i = 0;
    int n = str.length();
    while (i < n)
    {
        while (i < n && str[i] == ' ')
        {
            i++;
        }
        if (i >= n)
        {
            break;
        }
        int j = i + 1;
        while (j < n && str[j] != ' ')
        {
            j++;
        }
        sub = str.substr(i, j - i);
        if (result.length() == 0)
        {
            result = sub;
        }
        else
        {
            result = sub + " " + result;
        }
        i = j;
    }
    return result;
}

int main()
{
    string str = "Welcome to gfg";
    string res = reverse_str(str);
    cout << res << endl;
    return 0;
}
