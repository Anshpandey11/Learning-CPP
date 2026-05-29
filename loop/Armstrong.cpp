#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m = n;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (m == sum)
    {
        cout << "armstrong number";
    }
    else
    {
        cout << "not a armstrong number";
    }

    return 0;
}