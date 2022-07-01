#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Nhap x, n: ";
    cin >> x;
    cin >> n;
    float s = 1;
    for (int i = 1; i <= n; i++)
    {
        s *= x;
    }
    cout << "Ket qua S(" << n << ") = " << s;
    return 1;
}