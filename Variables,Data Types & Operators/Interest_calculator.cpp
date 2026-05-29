#include <iostream>
using namespace std;

int main()
{
    float p;
    float r;
    float t;
    cout << "Enter the principal:-";
    cin >> p;
    cout << "Enter the rate:-";
    cin >> r;
    cout << "Enter the time:-";
    cin >> t;
    float inter = (p * r * t) / 100;
    cout << "The interest is:-" << inter << endl;
    return 0;
}