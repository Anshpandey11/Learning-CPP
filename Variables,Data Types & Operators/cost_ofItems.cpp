#include <iostream>
using namespace std;

int main()
{
    float a;
    float b;
    float c;
    cout << "Enter the cost of first item:-";
    cin >> a;
    cout << "Enter the cost of second item:-";
    cin >> b;
    cout << "Enter the cost of third item:-";
    cin >> c;
    float total = (a + b + c) * 1.18;
    cout << "The total cost of items:-" << total << endl;
    return 0;
}