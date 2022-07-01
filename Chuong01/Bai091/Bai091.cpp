// Bai091.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 091" << endl;
    int x, n;
    cout << "Nhap x = ";
    cin >> x;

    cout << "Nhap n = ";
    cin >> n;

    float S = -1;
    int T = 1, M = 1;
    int dau = 1, i = 2;

    cout << "S(" << x << "," << n << ") = -1";
    while (i <= 2 * n)
    {
        T = T * x * x;
        M = M * (i - 1) * i;
        S = S + dau * float(T) / M;

        if (dau == 1)
            cout << " + ";
        else
            cout << " - ";

        cout << x << "^" << i << "/" << i << "!";
        dau = -dau;
        i = i + 2;
    }

    cout << " = " << S;
    return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
