#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k;
    cout << "Nhap n, k: ";
    cin >> n;
    cin >> k;
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + pow(i, k);
    }
    cout << "Ket qua S(" << n << "," << k << ") = " << s;
    return 1;
}