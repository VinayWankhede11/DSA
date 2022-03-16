#include <iostream>
using namespace std;

void isKthBitSet(int n, int k)  //Left Shift
{
    if (n & (1 << (k - 1)))
        cout << "SET";
    else
        cout << "NOT SET";
}
void isKthBitSet1(int n, int k)  //Right Shift
{
    if ((n >> (k - 1)) & 1)
        cout << "SET";
    else
        cout << "NOT SET";
}
bool checkKthBit(int n, int k)   //Most efficient
{
    return (n & (1 << k));
}

// Driver code
int main()
{
    int n = 5, k = 1;
    isKthBitSet(n, k);
    return 0;
}