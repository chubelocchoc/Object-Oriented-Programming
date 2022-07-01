#include <iostream>;
using namespace std;
#include <stdio.h>;

int main() {
	cout << "Nhap n: ";
	int n, i;
	cin >> n;
	float S = 0;
	i = 1;
	while (i <= n) {
		S = S + 1.0 / (i * (i + 1));
		i = i + 1;
	}
	printf("S(%d) = %f", n, S);
	return 1;

}