#include <iostream>
#include <limits.h>
using namespace std;

int fact(int n)                      //RECURSIVE SOLUTION
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

// int fact(int n)            ITERATIVE SOLUTION
// {
//     int res = 1;

//     for (int i = 2; i <= n; i++)
//     {
//         res = res * i;
//     }

//     return res;
// }

int main()
{

    int number = 5;

    cout << fact(number);

    return 0;
}