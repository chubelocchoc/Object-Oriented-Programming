#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int a = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        a += 1 / i;
        cout << "(1/" << i << ") + ";
    }
    return 1;
}