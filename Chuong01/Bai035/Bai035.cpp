#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float s = 1;
    for (int i = 1; i <= n; i++)
    {
        s *= i;
    }
    cout << "Ket qua S(" << n << ") = " << s;
    return 1;
}