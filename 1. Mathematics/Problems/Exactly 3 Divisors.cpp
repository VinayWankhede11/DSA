// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    bool isPrime(int i)
    {

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
                return false;
        }

        return true;
    }
    int exactly3Divisors(int N)
    {
        //Your code here
        int count = 0;
        for (int i = 2; i * i <= N; i++)
        {
            if (isPrime(i))
                count++;
        }
        return count;
    }
};

// { Driver Code Starts.

int main()
{
    int T;

    //taking testcases
    cin >> T;
    while (T--)
    {
        int N;

        //taking N
        cin >> N;
        Solution ob;
        //calling function exactly3Divisors()
        cout << ob.exactly3Divisors(N) << endl;
    }
    return 0;
} // } Driver Code Ends