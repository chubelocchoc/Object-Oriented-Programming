#include <iostream>;
using namespace std;
#include<stdio.h>;
#include <math.h>;

int main() {
	cout << "Nhap n: ";
	int n, i, dau, M;
	cin >> n;
	dau = 1;
	i = 1;
	M = 0;
	float S = 0;
	while (i <= n)
	{
		M = M + i;
		S = S + dau * 1.0 / M;
		i = i + 1;
		dau = -dau;
	}
	printf("S(%d) = %f\n", n, S);
	return 1;
}