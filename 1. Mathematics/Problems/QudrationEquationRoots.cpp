// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#include <math.h>
#include <stdlib.h>

class Solution
{
public:
    vector<int> quadraticRoots(int a, int b, int c)
    {
        // code here
        int d;
        d = pow(b, 2) - (4 * a * c);

        if (d == 0)
        {
            return {-b / (2 * a), -b / (2 * a)};
        }
        else if (d > 0)
        {
            int x, y, maxRoot, minRoot;
            x = floor((-b + sqrt(d)) / (2 * a));
            y = floor((-b - sqrt(d)) / (2 * a));

            maxRoot = max(x, y);
            minRoot = min(x, y);

            return {maxRoot, minRoot};
        }
        else
        {
            return {-1};
        }
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++)
                cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends