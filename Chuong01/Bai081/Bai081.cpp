#include <iostream>;
using namespace std;
#include<stdio.h>;

int main() {
	cout << "Nhap x: ";
	int x;
	cin >> x;
	cout << "Nhap n: ";
	int n, i, M;
	cin >> n;
	i = 1;
	M = x;
	float S = 1.0 / x;
	while (i <= n)
	{
		M = M * (x + i);
		S = S + 1.0 / M;
		i = i + 1;
	}
	printf("S(%d,%d) = %f", x, n, S);
	return 1;
}