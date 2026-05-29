#include <iostream>
using namespace std;

int main()
{
    float pi = 3.14;
    float r;
    cout << "Enter the radius:-";
    cin >> r;
    float area = pi * r * r;
    cout << "The area of circle is:-" << area << endl;
    return 0;
}