#include "eList.h"

int main()
{
	eList a;
	a.Nhap();
	cout << "Filter sach theo gia ban:" << endl;
	a.FilterPrice();

	return 1;
}