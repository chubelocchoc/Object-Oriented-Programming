#include <iostream>
using namespace std;

#include <stdio.h>;

int main() {
	cout << "Nhap n (n>2): ";
	int n, i = 2, fTruoc = 1, fTruocTruoc = 1, fHienHanh;
	cin >> n;
	while (i <= n)
	{
		fHienHanh = fTruoc + fTruocTruoc;
		fTruocTruoc = fTruoc;
		fTruoc = fHienHanh;
		i++;
	}
	printf("So hang thu %d cua day fibonacci la %d", n, fHienHanh);
	return 1;
}