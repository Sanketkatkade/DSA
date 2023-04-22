#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class solution
{
private:
    bool valid(char ch)
    {
        // checks if the character is alphanumeric
        return isalnum(ch);
    }

    char toLowerCase(char ch)
    {
        // converts the character to lowercase if it's an uppercase letter
        if (ch >= 'A' && ch <= 'Z')
        {
            return ch - 'A' + 'a';
        }
        return ch;
    }

public:
    bool isPalindrome(string s)
    {
        string temp = "";
        for (int j = 0; j < s.length(); j++)
        {
            if (valid(s[j]))
            {
                temp.push_back(toLowerCase(s[j]));
            }
        }

        // checks if the string is a palindrome
        int i = 0, j = temp.length() - 1;
        while (i < j)
        {
            if (temp[i] != temp[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

int main()
{
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    solution sol;
    if (sol.isPalindrome(s))
    {
        cout << s << " is a palindrome.\n";
    }
    else
    {
        cout << s << " is not a palindrome.\n";
    }

    return 0;
}
