#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float at = 2;
    float ahh;
    if (n == 1)
    {
        ahh = at;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            ahh = 5 * at + sqrt(24 * at * at - 8);
            at = ahh;
        }
    }
    float a = 5 * 2 + sqrt(24 * 2 * 2 - 8);
    cout << "Ket qua a(" << n << ") = " << ahh << endl;
    cout << "Kiem chung: " << a;
    return 1;
}