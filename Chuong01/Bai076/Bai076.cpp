#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, n;
    cout << "Nhap x, n: ";
    cin >> x;
    cin >> n;
    float s = 1;
    float m = 1;
    float t = x;
    for (int i = 1; i <= (2 * n + 1); i += 2)
    {
        s += t / m;
        t *= x * x;
        m *= (i + 1) * (i + 2);
    }
    // float a = 1 + 2 + (float)pow(2, 3) / (1 * 2 * 3) + (float)pow(2, 5) / (1 * 2 * 3 * 4 * 5);
    // cout << a << endl;
    cout << "Ket qua S(" << x << "," << n << ") = " << s;
    return 1;
}