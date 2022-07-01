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
    float m = 1 * 2;
    float t = 1;
    for (int i = 1; i <= n; i++)
    {
        t *= x * x;
        s += t / m;
        m *= (i + 2) * (i + 3);
    }
    cout << "Ket qua S(" << x << "," << n << ") = " << s;
    return 1;
}