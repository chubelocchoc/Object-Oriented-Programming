#include <iostream>;
using namespace std;
#include<stdio.h>;
#include <math.h>;

int main() {
	cout << "Nhap x: ";
	int x;
	cin >> x;
	cout << "Nhap n: ";
	int n, i;
	cin >> n;
	i = 1;
	float T = 1;
	float S = 0;
	while (i <= n)
	{
		T = T * sin(x);
		S = S + T;
		i = i + 1;
	}
	printf("S(%d,%d) = %f\n", x, n, S);
	//test
	//cout << sin(1) + sin(1)* sin(1)+ sin(1)* sin(1)* sin(1)+ sin(1)* sin(1)* sin(1)* sin(1);
	return 1;
}