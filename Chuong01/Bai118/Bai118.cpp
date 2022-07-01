#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float at = 2;
    float ahh;
    if (n > 1)
    {
        for (int i = 2; i <= n; i++)
        {
            ahh = float((-9 * at - 24)) / (5 * at + 13);
            at = ahh;
        }
    }
    else
    {
        ahh = 2;
    }

    cout << "Ket qua a(" << n << ") = " << ahh;
    return 1;
}