#include <iostream>
using namespace std;
int main()
{
    int n;
    int S;
    int i;
    int kq = 0;
    cout << "Nhap n: ";
    cin >> n;
    S = 0;
    i = 0;
    while (S < n)
    {
        kq = i;
        i++;
        S = S + i;
    }
    cout << "Ket qua la: " << kq << endl;
    return 1;
}