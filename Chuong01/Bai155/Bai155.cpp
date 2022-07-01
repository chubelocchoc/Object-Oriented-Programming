#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a = a * 2;
        cout << a;
    }
    cout << "Ket qua: " << a;
    return 1;
}