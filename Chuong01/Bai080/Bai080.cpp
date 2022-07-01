#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "Nhap x, n: ";
    cin >> x;
    cin >> n;
    int s = 1;
    int t = 1;
    for (int i = 1; i <= n; i++)
    {
        t = t * x;
        s += (i + 1) * t;
    }
    cout << "Ket qua S(" << x << "," << n << ") = " << s;
    return 1;
}