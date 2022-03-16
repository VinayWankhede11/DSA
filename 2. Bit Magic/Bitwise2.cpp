#include <iostream>
using namespace std;

int main()
{
    //NOT Operator

    int x = 1;          //Signed integer

    cout << (~x) << endl;

    x = 5;

    cout << (~x) << endl;

    unsigned int y = 1;  //Unsigned integer

    cout << (~y) << endl;

    y = 5;

    cout << (~y) << endl;

    return 0;
}