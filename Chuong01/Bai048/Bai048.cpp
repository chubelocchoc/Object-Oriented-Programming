#include <iostream>;
using namespace std;
#include <stdio.h>;

int main() {
	cout << "Nhap x: ";
	int x;
	cin >> x;
	cout << "Nhap n: ";
	int n, i;
	cin >> n;
	int S = 1;
	i = n;
	while (i >= 0) {
		S = S * (x + i);
		i = i - 1;
	}
	printf("S(%d,%d) = %d", x, n, S);
	return 1;

}