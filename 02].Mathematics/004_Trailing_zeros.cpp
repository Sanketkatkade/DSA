#include <iostream>
using namespace std;

// int countZero(int x)
// {
//     int fact = 1;
//    for (int i = 2; i <= x; i++)
//    {
//         fact = fact * i;
//    }
//    int res = 0;
//    while(fact % 10 == 0){
//     res++;
//     fact /= 10;
//    }
//    return res;
// }

int countZero(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        res += (n / i);
    }
    return res;
}

int main()
{
    int x;
    cin >> x;
    int num_zeros = countZero(x);
    cout << "Number of trailing erzos in " << x << "! is: " << num_zeros << endl;
    return 0;
}
