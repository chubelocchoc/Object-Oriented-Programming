#include <iostream>
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
            ahh = (float)(at * at + 2) / (2 * at);
            at = ahh;
        }
    }
    cout << "Ket qua a(" << n << ") = " << ahh;
    return 1;
}