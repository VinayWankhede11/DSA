#include <iostream>
using namespace std;

int findOdd(int arr[], int n)    //Naive implementation O(n^2)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count % 2 != 0)
            return arr[i];
    }
}

int findOdd(int arr[], int n)      //Efficient implementation O(n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }

    return res;
}

int main()
{

    int arr[] = {4, 3, 4, 4, 4, 5, 5, 3, 3}, n = 9;

    cout << findOdd(arr, n);