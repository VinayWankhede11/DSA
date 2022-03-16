#include <iostream>
using namespace std;

int main()
{

    int x = 33;

    cout << (x >> 1) << endl;     //Right shift operator

    cout << (x >> 2) << endl;

    int y = 4;

    int z = x >> y;

    cout << z << endl;

    int a = 3;                  //Left shift operator

    cout << (a << 1) << endl;

    cout << (a << 2) << endl;

    int b = 4;

    int c = a << b;

    cout << c << endl;

    return 0;
}