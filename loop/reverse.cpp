#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (0 < n)
    {
        int digits = n % 10;
        n /= 10;
        cout << digits;
    }
    return 0;
}