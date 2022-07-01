#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double S = 4 - 2 / 4 - 1 / 5 - 1 / 6;
    float T = 1;
    float e = 1;
    int i = 1;
    while (e >= pow(10, -6))
    {
        e = (1 / T) * (4 / (8 * i + 1) - 2 / (8 * i + 4) - 1 / (8 * i + 5) - 1 / (8 * i + 6));
        S += e;
        T *= 16;
        i++;
    }
    cout << "Ket qua pi = " << S;
    return 1;
}