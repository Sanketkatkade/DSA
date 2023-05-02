#include <iostream>
using namespace std;

/******************iterative approach*******************/

// bool isSubsequence(string s1, string s2)
// {
//     int i = 0;
//     int j = 0;
//     while (i < s1.size() && j < s2.size())
//     {
//         if (s1[i] == s2[j])
//         {
//             j++;
//         }
//         i++;
//     }
//     return j == s2.size();
// }

/******************iterative approach*******************/

// bool isSubsequence(string s1, string s2, int n, int m)
// {
//     int j = 0;
//     for (int i = 0; i < n && j < m; i++)
//     {
//         if (s1[i] == s2[j])
//         {
//             j++;
//         }
//     }
//     return j == m;
// }



/***********reccursive method***************************/
bool isSubsequence(string s1, string s2, int n, int m)
{
    if(m == 0){
        return true;
    }
    if(n == 0){
        return false;
    }
    if(s1[n-1]==s2[m-1]){
        return (s1,s2,n-1,m-1);
    }
    else{
        return (s1,s2,n-1,m);
    }

}


int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "gfgk";
    bool res = isSubsequence(s1, s2 , s1.length(), s2.length());
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
