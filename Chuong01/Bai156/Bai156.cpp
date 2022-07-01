// Cach 1:
// -------------------
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Nhap n: ";
//     cin >> n;
//     int i = 1;
//     int a;
//     for (int i = 1; i <= n; i++)
//     {
//         a = 1;
//         for (int j = 1; j <= i; j++)
//             a *= j;
//         cout << "a (" << i << ") = " << a << endl;
//     }
//     return 1;
// }
// Cach 2
// ------------------------
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int i = 1;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        a *= i;
        cout << "a (" << i << ") = " << a << endl;
    }
    return 1;
}