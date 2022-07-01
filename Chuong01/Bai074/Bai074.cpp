#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "Nhap x, n: ";
    cin >> x;
    cin >> n;
    float s = 0;
    float m = 1;
    float t = 1;
    for (int i = 1; i <= n; i++)
    {
        m *= i;
        t *= x;
        s += t / m;
    }
    cout << "Ket qua S(" << x << "," << n << ") = " << s;
    return 1;
}