#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "Nhap x, n: ";
    cin >> x;
    cin >> n;
    int s = x;
    int t = x;
    for (int i = 3; i <= (2 * n + 1); i = i + 2)
    {
        t *= x * x;
        s += t;
    }
    cout << "Ket qua S(" << x << "," << n << ") = " << s;
    return 1;
}