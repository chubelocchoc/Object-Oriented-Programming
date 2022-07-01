#include"zList.h"

int main()
{
	List A;
	A.Input();
	A.Output();
	A.Move(20, 20);
	cout << "After moved!" << endl;
	A.Output();
	return 1;
}