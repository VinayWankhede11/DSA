#include <iostream>
#include <limits.h>
using namespace std;

void printDivisors(int n) // Efficient method
{
    int i = 1;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)        //print all divisors from 1 to sqrt(n)
        {
            cout << i << " ";
        }
    }

    for (; i >= 1; i--)       //print all divisors from sqrt(n) to n
    {
        if (n % i == 0)
        {
            cout << (n / i) << " ";
        }
    }
}

void printDivisors(int n)                 
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";

            if (i != (n / i))
                cout << (n / i) << " ";
        }
    }
}

int main()
{

    int n = 15;

    printDivisors(n);

    return 0;
}