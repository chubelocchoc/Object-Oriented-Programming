#include <iostream>;
using namespace std;
#include <stdio.h>;

int main() {
	cout << "Nhap n: ";
	int n, S, i;
	cin >> n;
	S = 0;
	i = 1;
	while (i <= n) {
		S = S + i * (i + 1) * (i + 2);
		i = i + 1;
	}
	printf("S(%d) = %d", n, S);
	return 1;

}