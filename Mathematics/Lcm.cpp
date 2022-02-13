#include <iostream>
#include <limits.h>
using namespace std;

int gcd (int a, int b)           //naive solution
{
    int res= max(a,b);
    while(true)
    {
        if(res%a==0 && res%b==0)
        {
            return res;
        }
        res++;
    }
}



int gcd(int a, int b)     //efficient solution
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{

    int a = 4, b = 6;

    cout << lcm(a, b);

    return 0;
}