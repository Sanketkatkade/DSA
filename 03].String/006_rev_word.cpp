#include <iostream>
#include <vector>
using namespace std;

string revWord(string s)
{
    int start = 0;
    int end = 0;
    int word = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != ' ')
        {
            word++;
            end++;
            if(i == s.size()-1)
            {
                for(int j = 0;j<s.size()-word+1;j++)
                {
                    swap(s[j],s[j+1]);
                }
            }
        }
        else if (s[i] == ' ')
        {
            word = 0;
            while (start < end)
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            start = i + 1;
            end = i + 1;
        }
    }
    while (start < end)
    {
        swap(s[start], s[end - 1]);
        start++;
        end--;
    }



    return s;
}

int main()
{
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    string c = revWord(s);
    cout << c << endl;
    return 0;
}
