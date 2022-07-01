#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int s = 0;
    int t = 1;
    for (int i = 1; i <= n; i++)
    {
        t *= i;
        s += i * t;
    }
    cout << "Ket qua S(" << n << ") = " << s;
    return 1;
}