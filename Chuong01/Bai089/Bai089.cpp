#include <iostream>;
using namespace std;
#include<stdio.h>;
#include <math.h>;

int main() {
	cout << "Nhap x: ";
	int x;
	cin >> x;
	cout << "Nhap n: ";
	int n, i, dau, T, M;
	cin >> n;
	i = 1;
	T = 1;
	M = 0;
	float S = 0;
	dau = -1;
	while (i <= n)
	{
		T = T * x;
		M = M + i;
		S = S + dau * (float)T / M;
		i = i + 1;
		dau = -dau;
	}
	printf("S(%d,%d) = %f\n", x, n, S);
	return 1;
}