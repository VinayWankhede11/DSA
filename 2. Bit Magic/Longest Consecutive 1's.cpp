
#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(int N)
{
    // Initialize result
    int count = 0;

    // Count the number of iterations to
    // reach x = 0.
    while (N != 0)
    {
      
        N = (N & (N << 1));

        count++;
    }

    return count;
}

// Driver code
int main()
{
    cout << maxConsecutiveOnes(14) << endl;
    cout << maxConsecutiveOnes(222) << endl;
    return 0;
}
