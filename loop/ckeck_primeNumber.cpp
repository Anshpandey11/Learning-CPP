#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool prime = true;
    if (n == 2)
    {
        cout << "Prime number";
    }
    else
    {
        for (int i = 2; i <= n - 1; i++)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            cout << "number is prime" << endl;
        }
        else
        {
            cout << "number is not prime" << endl;
        }
    }
    return 0;
}