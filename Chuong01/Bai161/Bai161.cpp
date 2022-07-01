#include <iostream>
using namespace std;

#include <stdio.h>;

int main() {
	int n, t, flag = 0, dv, temp;
	cout << "Nhap n : ";
	cin >> n;
	t = n;
	while (t != 0)
	{
		dv = t % 10;
		temp = (t / 10) % 10;
		if (dv < temp)
		{
			flag = 1;
		}
		t = t / 10;
	}
	if (flag == 1)
	{
		printf("Chu so cua so %d KHONG tang dan tu trai sang phai", n);
	}
	else
	{
		printf("Chu so  cua so %d tang dan tu trai sang phai", n);
	}
	return 1;
}