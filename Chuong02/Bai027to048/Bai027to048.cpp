#include<iostream>
using namespace std;
#include<string>


void Nhap(int&);
int Bai027(int);
int Bai028(int);
float Bai029(int);
float Bai030(int);
float Bai031(int);
float Bai032(int);
float Bai033(int);
float Bai034(int);
float Bai035(int);
float Bai036(int);
float Bai037(int);
float Bai038(int);
float Bai039(int);
float Bai040(int);
float Bai041(int);
float Bai042(int);
float Bai043(int);
float Bai044(int);
float Bai045(int);
float Bai046(int);
float Bai047(int);
float Bai048(int);

int main()
{
	int n;
	string str;
	cout << "**Bai 027-048 **" << endl;
	Nhap(n);
	cin.ignore();
	do
	{
		cout << "\nInput 'bai027' to go to Bai027 or (bai028...bai048) to go to (Bai028...Bai048) or 'ket thuc' to end, please!" << endl;

		getline(cin, str); //lay ky tu nhap vao.

		if (str.compare("bai027") == 0)
			Bai027(n);
		else if (str.compare("bai028") == 0)
			Bai028(n);
		else if (str.compare("bai029") == 0)
			Bai029(n);
		else if (str.compare("bai030") == 0)
			Bai030(n);
		else if (str.compare("bai031") == 0)
			Bai031(n);
		else if (str.compare("bai032") == 0)
			Bai032(n);
		else if (str.compare("bai033") == 0)
			Bai033(n);
		else if (str.compare("bai034") == 0)
			Bai034(n);
		else if (str.compare("bai035") == 0)
			Bai035(n);
		else if (str.compare("bai036") == 0)
			Bai036(n);
		else if (str.compare("bai037") == 0)
			Bai037(n);
		else if (str.compare("bai038") == 0)
			Bai038(n);
		else if (str.compare("bai039") == 0)
			Bai039(n);
		else if (str.compare("bai040") == 0)
			Bai040(n);
		else if (str.compare("bai041") == 0)
			Bai041(n);
		else if (str.compare("bai042") == 0)
			Bai042(n);
		else if (str.compare("bai043") == 0)
			Bai043(n);
		else if (str.compare("bai044") == 0)
			Bai044(n);
		else if (str.compare("bai045") == 0)
			Bai045(n);
		else if (str.compare("bai046") == 0)
			Bai046(n);
		else if (str.compare("bai047") == 0)
			Bai047(n);
		else if (str.compare("bai048") == 0)
			Bai048(n);
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

int Bai027(int n)
{
	cout << "\n*****Start*****\n" << " Bai 027" << endl;
	int S = 0;
	int i = 1;

	while (i <= n)
	{
		S = S + i;
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}

int Bai028(int n)
{
	cout << "\n*****Start*****\n" << " Bai 028" << endl;
	int S = 0;
	int i = 1;
	int T = 1;

	while (i <= n)
	{
		T = T * T;
		S = S + pow(i, 2);
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}

float Bai029(int n)
{
	cout << "\n*****Start*****\n" << " Bai 029" << endl;
	float S = 0;
	int i = 1;

	while (i <= n)
	{
		S = S + (float)1 / i;
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}

float Bai030(int n)
{
	cout << "\n*****Start*****\n" << " Bai 030" << endl;
	float S = 0;
	int i = 2;

	while (i <= 2 * n)
	{
		S = S + (float)1 / i;
		i = i + 2;
	}
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}

float Bai031(int n)
{
	cout << "\n*****Start*****\n" << " Bai 031" << endl;
	float s = 0;
	for (int i = 0; i <= n; i++)
	{
		s += (float)1 / (2 * i + 1);
	}
	cout << "tong la: " << s << endl;
	cout << "___________End___________" << endl;
	return s;
}

float Bai032(int n)
{
	cout << "\n*****Start*****\n" << " Bai 032" << endl;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += (float)1 / (i * (i + 1));
	}
	cout << "tong la: " << s << endl;
	cout << "___________End___________" << endl;
	return s;
}

float Bai033(int n)
{
	cout << "\n*****Start*****\n" << " Bai 033" << endl;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += (float)i / (i + 1);
	}
	cout << "tong la: " << s << endl;
	cout << "___________End___________" << endl;
	return s;
}

float Bai034(int n)
{
	cout << "\n*****Start*****\n" << " Bai 034" << endl;
	float s = 0;
	for (int i = 1; i <= (2 * n + 1); i += 2)
	{
		s += (float)i / (i + 1);
	}
	cout << "tong la: " << s << endl;
	cout << "___________End___________" << endl;
	return s;
}

float Bai035(int n)
{
	cout << "\n*****Start*****\n" << " Bai 035" << endl;
	float s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}
	cout << "tong la: " << s << endl;
	cout << "___________End___________" << endl;
	return s;
}

float Bai036(int n)
{
	cout << "\n*****Start*****\n" << " Bai 036" << endl;
	float s = 1;
	int x;
	cout << "input x: ";
	cin >> x;
	for (int i = 1; i <= n; i++)
	{
		s = x* s;
	}
	cout << "tich la: " << s << endl;
	cout << "___________End___________" << endl;
	return s;
}

float Bai037(int n)
{
	cout << "\n*****Start*****\n" << " Bai 037" << endl;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += i * i * i;
	}
	cout << "tong la: " << s << endl;
	cout << "___________End___________" << endl;
	return s;
}

float Bai038(int n)
{
	cout << "\n*****Start*****\n" << " Bai 038" << endl;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += i * i * i * i;
	}
	cout << "tong la: " << s << endl;
	cout << "___________End___________" << endl;
	return s;
}

float Bai039(int n)
{
	cout << "\n*****Start*****\n" << " Bai 039" << endl;
	float s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= (1 + (float)1 / (i * i));
	}
	cout << "tong la: " << s << endl;
	cout << "___________End___________" << endl;
	return s;
}

float Bai040(int n)
{
	cout << "\n*****Start*****\n" << " Bai 040" << endl;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += i * (i + 1);
	}
	cout << "tong la: " << s << endl;
	cout << "___________End___________" << endl;
	return s;
}

float Bai041(int n)
{
	cout << "\n*****Start*****\n" << " Bai 041" << endl;
	float S = 0;
	int i = 1;
	while (i <= n) {
		S = S + i * (i + 1) * (i + 2);
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}

float Bai042(int n)
{
	cout << "\n*****Start*****\n" << " Bai 042" << endl;
	float S = 0;
	int i = 1;
	while (i <= n) {
		S = S + 1.0 / (i * (i + 1));
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}

float Bai043(int n)
{
	cout << "\n*****Start*****\n" << " Bai 043" << endl;
	float S = 0;
	int i = 1;
	while (i <= n) {
		S = S + 1.0 / (i * (i + 1) * (i + 2));
		i = i + 1;
	}	
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}

float Bai044(int n)
{
	cout << "\n*****Start*****\n" << " Bai 044" << endl;
	float S = 0;
	int i = 1;
	while (i <= n) {
		S = S + 1.0 / (i * (i + 1) * (i + 2) * (i + 3));
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}

float Bai045(int n)
{
	cout << "\n*****Start*****\n" << " Bai 045" << endl;
	float S = 0;
	int i = 1;
	while (i <= n) {
		S = S + 1.0 / (sqrt(i) * sqrt((i + 1)));
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}

float Bai046(int n)
{
	cout << "\n*****Start*****\n" << " Bai 046" << endl;
	float S = 0;
	int i = 1;
	while (i <= n) {
		S = S + 1.0 / ((i + 1) * sqrt(i) + i * sqrt((i + 1)));
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}

float Bai047(int n)
{
	cout << "\n*****Start*****\n" << " Bai 047" << endl;
	float S = 0;
	int i = 1;
	while (i <= n) {
		S = S + sqrt(1 + 1.0 / i * i + 1.0 / ((i + 1) * (i + 1)));
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}

float Bai048(int n)
{
	cout << "\n*****Start*****\n" << " Bai 048" << endl;
	int x;
	cout << "input x: ";
	cin >> x;
	int i = 0;
	float S = 1;
	int d;

	while (i <= n) 
	{
		d = x + i;
		S = S *d;
		i = i++;
	}
	cout << "tong la: " << S << endl;
	cout << "___________End___________" << endl;
	return S;
}