#include <bits/stdc++.h>
using namespace std;

unsigned int countSetBits(int n) // Brian and Kerningham Algorithm
{
    unsigned int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}
unsigned int countSetBits(unsigned int n)  //Naive Solution
{
    unsigned int count = 0;
    while (n != 0)
    {
        if (n % 2 != 0)
            count++;
        n = n / 2;
    }
    return count;
}

int main()
{
    int i = 9;
    cout << countSetBits(i);
    return 0;
}