#include <iostream>
using namespace std;

// void factorial(int x)
// {
//     int ans = 1;
//     if (x == 0)
//     {
//         cout << "1" << endl;
//     }
//     else
//     {
//         for (int i = 1; i <= x; i++)
//         {
//             ans *= i;
//         }
//         cout << ans << endl;
//     }
// }

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

    int main()
    {
        int x;
        cin >> x;
         int result = factorial(x);
         cout << "Factorial of " << x << " is " << result << endl;
        return 0;
    }