#include <iostream>
using namespace std;

string replaceSpace(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s.replace(i, 1, "@40");
        }
    }
    return s;
}

int main()
{
    string s;
    cout << "Enter the string" << endl;
    getline(cin, s);
    cout << replaceSpace(s) << endl;
    return 0;
}