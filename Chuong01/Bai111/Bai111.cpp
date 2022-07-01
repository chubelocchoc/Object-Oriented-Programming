#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float S = 3;
    float e = 1;
    int dau = 1;
    int i = 1;
    while (e >= pow(10, -6))
    {
        e = (float)4 / ((2 * i) * (2 * i + 1) * (2 * i + 2));
        S += dau * e;
        dau = -(dau);
        i++;
    }
    cout << "Ket qua la: " << S;
    return 1;
}