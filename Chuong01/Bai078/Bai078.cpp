#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "Nhap x, n: ";
    cin >> x;
    cin >> n;
    int s = 1;
    int temp = x;
    for (int i = 1; i <= n; i++)
    {
        s += temp;
        temp *= x;
    }
    cout << "Ket qua S(" << x << "," << n << ") = " << s;
    return 1;
}