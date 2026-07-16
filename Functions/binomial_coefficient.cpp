#include <iostream>
using namespace std;

int coe(int n, int r)
{
    int f = 1;
    int x = 1;
    int y = 1;
    int m = n - r;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    for (int i = 1; i <= r; i++)
    {
        x = x * i;
    }
    for (int i = 1; i <= m; i++)
    {
        y = y * i;
    }
    int c = f / (x * y);
    return c;
}

int main()
{
    int n, r;
    cin >> n;
    cin >> r;
    if (r > n)
    {
        cout << "Invalid Input";
        return 0;
    }
    cout << coe(n, r) << endl;
}