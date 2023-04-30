#include <iostream>
using namespace std;

bool isSubsequence(string s1, string s2)
{
    int i = 0;
    int j = 0;
    while (i < s1.size() && j < s2.size())
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
        i++;
    }

    if (j == s2.size())
    {
        return true;
    }
}

int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "grgesf";
    bool res = isSubsequence(s1, s2);
    if (res)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}