#include <iostream>;
using namespace std;
#include<stdio.h>;
#include <math.h>;

int main() {
	cout << "Nhap x: ";
	int x;
	cin >> x;
	cout << "Nhap n: ";
	int n, i, dau, T, S;
	cin >> n;
	i = 1;
	T = 1;
	S = x;
	dau = -1;
	while (i <= n)
	{
		T = pow(x, 2 * i + 1);
		S = S + dau * T;
		i = i + 1;
		dau = -dau;
	}
	printf("S(%d,%d) = %d\n", x, n, S);
	return 1;
}