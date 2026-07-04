#include <iostream>
using namespace std;

int product(int n, int m)
{
    return n * m;
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    cout << product(n, m) << endl;
    return 0;
}