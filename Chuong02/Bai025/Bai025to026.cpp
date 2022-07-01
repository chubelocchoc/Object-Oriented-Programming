#include<iostream>
using namespace std;
#include<string>


void Nhap(int&, int&);
void Bai025(int,int);
void Bai026(int,int);

int main()
{
	int a,b;
	string str;
	cout << "**Bai 025-026 **" << endl;
	Nhap(a,b);
	cin.ignore();
	do
	{
		cout << "\nInput 'bai025' to go to Bai025 or (bai026) to go to (Bai026) or 'ket thuc' to end, please!" << endl;

		getline(cin, str); //lay ky tu nhap vao.

		if (str.compare("bai025") == 0)
			Bai025(a,b);
		else if (str.compare("bai026") == 0)
			Bai026(a,b);
		else if (str.compare("nhap lai") == 0)
			Nhap(a, b);
		else if (str.compare("ket thuc") != 0)
			cout << "Input the match value, please!" << endl;
		//cout << str;
	} while (str.compare("ket thuc") != 0);
	return 1;
}

void Nhap(int& a, int& b)
{
	cout << "Input two interger: \n a: ";
	cin >> a;
	cout << " b: ";
	cin >> b;
}

void Bai025(int a, int b)
{
	cout << "\n*****Start*****\n" << " Bai 025" << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "gia tri cua a va b sau khi hoan vi la: \n a= " << a << endl << " b= " << b << "\n";
	cout << "___________End___________" << endl;
}

void Bai026(int a, int b)
{
	cout << "\n*****Start*****\n" << " Bai 026" << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "gia tri cua a va b sau khi hoan vi la: \n a= " << a << endl << " b= " << b << "\n";
	cout << "___________End___________" << endl;
}