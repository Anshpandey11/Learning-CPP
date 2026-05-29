#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter the number for a :-";
    cin >> a;
    cout << "Enter the number for b :-";
    cin >> b;
    float sum = a + b;
    float avg = sum / 2;
    cout << "Avarage of your number :-" << avg << endl;
    return 0;
}