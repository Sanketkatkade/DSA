#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "for";

    /**************Compare*************************/
    int res = s1.compare(s2);
    if (res == 0)
    {
        cout << "Same" << endl;
    }
    else if (res > 0)
    {
        cout << "s1 is Greater" << endl;
    }
    else
    {
        cout << "s1 is smaller" << endl;
    }

    /*******************indexOf***********************/
    cout << s1.find(s2) << endl;

    /*******************equal***********************/
    if (s1 == s2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }

    /*******************find***********************/
    if (s1.find(s2))
    {
        cout << "Substring found" << endl;
    }
    else
    {
        cout << "Substring not found" << endl;
    }

    /*******************concat***********************/
    string s3 = s1 + s2;
    cout << s3 << endl;

    return 0;
}