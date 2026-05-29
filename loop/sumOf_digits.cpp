#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    while (0 < n)
    {
        int digits = n % 10;
        n /= 10;
        sum += digits;
    }
    cout << sum;
    return 0;
}