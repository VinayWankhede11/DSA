

#include <bits/stdc++.h>
using namespace std;



class Solution
{
public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countSetBits(int n)
    {
        int count = 0;
        while (n > 0)
        {
            count++;
            n &= (n - 1);
        }
        return count;
    }
    int countBitsFlip(int a, int b)
    {

    
        return countSetBits(a ^ b);
    }
};


int main()
{
    int t;
    cin >> t;   // input the testcases
    while (t--) // while testcases exist
    {
        int a, b;
        cin >> a >> b; // input a and b

        Solution ob;
        cout << ob.countBitsFlip(a, b) << endl;
    }
    return 0;
} 