#include <iostream>;
using namespace std;
#include<stdio.h>;

int main() {
	cout << "Nhap n: ";
	int n, i;
	cin >> n;
	i = n;
	while (i > 0)
	{
		if (n % i == 0)
		{
			printf("%d la uoc so cua %d\n", i, n);
		}
		i = i - 1;
	}

	return 1;
}