
#include <bits/stdc++.h>
using namespace std;

int binaryConverter(int n)
{
    int res = n;
    while (n > 0)
    {
        n >>= 1;
        res ^= n;
    }
    return res;
}

// Driver Code
int main()
{
    int n = 4;

    // Function call
    cout << binaryConverter(n) << endl;

    return 0;
}

