#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        int m = n * i;
        cout << n << " x " << i << " = " << m << "\n";
    }
    return 0;
}