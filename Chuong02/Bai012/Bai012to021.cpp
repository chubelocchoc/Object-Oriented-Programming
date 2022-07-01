#include <iostream>
using namespace std;
#include <cstdint>
#include<string>

void Nhap(int&);
void bai012(int);
void bai013(int);
void bai014(int);
void bai015(int);
void bai016(int);
void bai017(int);
void bai018(int);
void bai019(int);
void bai020(int);
void bai021(int);

int main()
{
	int x;
	string str;
	cout << "**Bai 012-021 **" << endl;
	Nhap(x);
	cin.ignore();
	do
	{
		cout << "\nInput 'bai012' to go to Bai012 or (bai013...bai021) to go to (Bai013...Bai021) or 'ket thuc' to end, please!" << endl;

		getline(cin, str); //lay ky tu nhap vao.

		if (str.compare("bai012") == 0)
			bai012(x);
		else if (str.compare("bai013") == 0)
			bai013(x);
		else if (str.compare("bai014") == 0)
			bai014(x);
		else if (str.compare("bai015") == 0)
			bai015(x);
		else if (str.compare("bai016") == 0)
			bai016(x);
		else if (str.compare("bai017") == 0)
			bai017(x);
		else if (str.compare("bai018") == 0)
			bai018(x);
		else if (str.compare("bai019") == 0)
			bai019(x);
		else if (str.compare("bai020") == 0)
			bai020(x);
		else if (str.compare("bai021") == 0)
			bai021(x);
		else if (str.compare("ket thuc") != 0)
			cout << "Input the match value, please!" << endl;
		//cout << str;
	} while (str.compare("ket thuc") != 0);

	return 0;
}

void Nhap(int& x)
{
	cout << "nhap gia tri x: ";
	cin >> x;
	cout <<"\n__________________\n";

}

void bai012(int x)
{
	cout << "\n*****Start*****\n" << " Bai 012" << endl;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x6 = x4 * x2;
	cout << "X^6 voi 3 phep nhan= " << x6 << endl;
	cout << "___________End___________" << endl;
}

void bai013(int x)
{
	cout << "\n*****Start*****\n" << " Bai 013" << endl;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	int x7 = x8 / x;
	cout << "X^7 voi 4 phep nhan= " << x7 << endl;
	cout << "___________End___________" << endl;
}

void bai014(int x)
{
	cout << "\n*****Start*****\n" << " Bai 014" << endl;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	long long int x16 = x8 * x8;
	long long int x32 = x16 * x16;
	cout << "X^32 voi 5 phep nhan= " << x32 << endl;
	cout << "___________End___________" << endl;
}

void bai015(int x)
{
	cout << "\n*****Start*****\n" << " Bai 015" << endl;
	unsigned __int64 x2 = x * x;
	unsigned __int64  x4 = x2 * x2;
	unsigned __int64  x8 = x4 * x4;
	unsigned __int64  x16 = x8 * x8;
	unsigned __int64  x32 = x16 * x16;
	uint64_t max = INT64_MAX;
	cout << "Maximum value of uint64_t = " << max << endl;
	unsigned __int64  x64 = x32 * x32-1;
	cout << "X^64 voi 6 phep nhan= " << x64 << endl;

	cout << "___________End___________" << endl;
}

void bai016(int x)
{
	cout << "\n*****Start*****\n" << " Bai 016" << endl;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	long long int x9 = x8 * x;
	cout << "X^9 voi 4 phep nhan= " << x9 << endl;
	cout << "___________End___________" << endl;
}

void bai017(int x)
{
	cout << "\n*****Start*****\n" << " Bai 017" << endl;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	long long int x11 = x8 * x2 * x;
	cout << "X^11 voi so luong phep nhan toi thieu= " << x11 << endl;
	cout << "___________End___________" << endl;
}

void bai018(int x)
{
	cout << "\n*****Start*****\n" << " Bai 018" << endl;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	long long int x12 = x8 * x4;
	cout << "X^12 voi so luong phep nhan toi thieu= " << x12 << endl;
	cout << "___________End___________" << endl;
}

void bai019(int x)
{
	cout << "\n*****Start*****\n" << " Bai 019" << endl;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	long long int x13 = x8 * x4 * x;
	cout << "X^13 voi so luong phep nhan toi thieu= " << x13 << endl;
	cout << "___________End___________" << endl;
}

void bai020(int x)
{
	cout << "\n*****Start*****\n" << " Bai 020" << endl;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	long long int x14 = x8 * x4 * x2;
	cout << "X^14 voi so luong phep nhan toi thieu= " << x14 << endl;
	cout << "___________End___________" << endl;
}

void bai021(int x)
{
	cout << "\n*****Start*****\n" << " Bai 021" << endl;
	int x3 = x * x * x;
	int x6 = x3 * x3;
	long long int x12 = x6 * x6;
	long long int x15 = x12 * x3;
	cout << "X^15 voi so luong phep nhan toi thieu= " << x15 << endl;
	cout << "___________End___________" << endl;
}