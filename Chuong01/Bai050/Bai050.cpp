#include <iostream>;
using namespace std;
#include<stdio.h>;

int main() {
	cout << "Nhap n: ";
	int n, i, S;
	cin >> n;
	i = n;
	S = 0;
	while (i > 0)
	{
		if (n % i == 0)
		{
			printf("%d la uoc so cua %d\n", i, n);
			S = S + i;
		}
		i = i - 1;
	}
	printf("Tong tat ca cac uoc so cua %d la: %d", n, S);
	return 1;
}