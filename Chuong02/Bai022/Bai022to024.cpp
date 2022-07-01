#include<iostream>
using namespace std;
#include<string>


void Nhap(int&);
void Bai022(int);
void Bai023(int);
void Bai024(int);

int main()
{
	int x;
	string str;
	cout << "**Bai 022-024 **" << endl;
	Nhap(x);
	cin.ignore();
	do
	{
		cout << "\nInput 'bai022' to go to Bai022 or (bai023,bai024) to go to (Bai023,Bai024) or 'ket thuc' to end, please!" << endl;

		getline(cin, str); //lay ky tu nhap vao.

		if (str.compare("bai022") == 0)
			Bai022(x);
		else if (str.compare("bai023") == 0)
			Bai023(x);
		else if (str.compare("bai024") == 0)
			Bai024(x);
		else if (str.compare("ket thuc") != 0)
			cout << "Input the match value, please!" << endl;
		//cout << str;
	} while (str.compare("ket thuc") != 0);
	return 1;
}

void Nhap(int& n)
{
	cout << "Input the interger: ";
	cin >> n;
}

void Bai022(int n)
{
	cout << "\n*****Start*****\n" << " Bai 022" << endl;
	int dv = n % 10;
	cout << "chu so hang don vi cua " << n << " la: " << dv << "\n";
	cout << "___________End___________" << endl;
}

void Bai023(int n)
{
	cout << "\n*****Start*****\n" << " Bai 023" << endl;
	int hc = n / 10 % 10;
	cout << "chu so hang chuc cua " << n << " la: " << hc << "\n";
	cout << "___________End___________" << endl;
}

void Bai024(int n)
{
	cout << "\n*****Start*****\n" << " Bai 024" << endl;
	int ht = n / 100 % 10;
	cout << "chu so hang tram cua " << n << " la: " << ht << "\n";
	cout << "___________End___________" << endl;
}