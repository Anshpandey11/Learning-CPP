#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 500000)
    {
        cout << n;
    }
    else if (500000 < n && n <= 1000000)
    {
        cout << n * (1 - 0.2);
    }
    else if (1000000 < n)
    {
        cout << n * (1 - 0.3);
    }
    return 0;
}