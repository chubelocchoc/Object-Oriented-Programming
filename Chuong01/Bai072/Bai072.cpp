#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float s = 0;
    float m = 0;
    for (int i = 1; i <= n; i++)
    {
        m += i;
        s += 1 / m;
    }
    cout << "Ket qua S(" << n << ") = " << s;
    return 1;
}