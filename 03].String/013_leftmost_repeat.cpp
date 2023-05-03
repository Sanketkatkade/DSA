#include <iostream>
using namespace std;

/*****************Naive Solotion************************/

// int left_most_repeat(string str)
// {
//     for (int i = 0; i < str.size(); i++)
//     {
//         for (int j = i + 1; j < str.size(); j++)
//         {
//             if (str[i] == str[j])
//             {
//                 return i;
//             }
//         }
//     }
//     return -1;
// }

/*****************Better Appraoch************************/


const int CHAR = 256;
int left_most_repeat(string str)
{
    int count[CHAR] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        count[str[i]]++;
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (count[str[i]] > 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string str = "abcdcdf";
    int res = left_most_repeat(str);
    cout << res << endl;
    return 0;
}