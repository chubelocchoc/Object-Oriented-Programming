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
	S = 0;
	dau = 1;
	while (i <= n)
	{
		T = T * x;
		S = S + dau * T;
		i = i + 1;
		dau = -dau;
	}
	printf("S(%d,%d) = %d\n", x, n, S);
	return 1;
}