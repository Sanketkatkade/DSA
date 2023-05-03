#include <iostream>
using namespace std;

int leftmost_non_repeating(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        int count = 0;
        for (int j = i; j < str.size(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string str = "geeksforgeeks";
    int res = leftmost_non_repeating(str);
    cout << res << endl;
    return 0;
}