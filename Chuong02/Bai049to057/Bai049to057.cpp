#include<iostream>
using namespace std;
#include<string>

void Nhap(int&);
void UocSo(int[], int);
int SoLuongUoc(int);
void Bai049(int[],int);
int Bai050(int[], int);
int Bai051(int[], int);
int Bai052(int);
void Bai053(int[], int);
int Bai054(int[], int);
int Bai055(int[], int);
int Bai056(int[], int);
int Bai057(int[], int);

//void Bai050(int);

int main()
{
	int n;
	int a[100];
	string str;
	cout << "**Bai 049-057 **" << endl;
	Nhap(n);
	int k = SoLuongUoc(n);
	UocSo(a, n);
	cin.ignore();
	do
	{
		cout << "\nInput 'bai049' to go to Bai049 or (bai050...bai057) to go to (Bai050...Bai057) or 'ket thuc' to end, please!" << endl;

		getline(cin, str); //lay ky tu nhap vao.
		//cout << str;
		if (str.compare("bai049") == 0)
			Bai049(a,k);
		else if (str.compare("bai050") == 0)
			Bai050(a, k);
		else if (str.compare("bai051") == 0)
			Bai051(a, k);
		else if (str.compare("bai052") == 0)
			Bai052(n);
		else if (str.compare("bai053") == 0)
			Bai053(a, k);
		else if (str.compare("bai054") == 0)
			Bai054(a, k);
		else if (str.compare("bai055") == 0)
			Bai055(a, k);
		else if (str.compare("bai056") == 0)
			Bai056(a, k);
		else if (str.compare("bai057") == 0)
			Bai057(a, k);
		else if (str.compare("ket thuc") != 0)
			cout << "Input the match value, please!" << endl;
		
	} while (str.compare("ket thuc") != 0);
	return 1;
}

void Nhap(int& n)
{
	cout << "Input the interger n: ";
	cin >> n;
}

int SoLuongUoc(int n)
{
	int dem = 0;
	int i = n;
	while (i > 0)
	{
		if (n % i == 0)
		{
			dem++;
		}
		i = i - 1;
	}
	return dem;
}

void UocSo(int a[],int n)
{
	int i = 0;
	for (int j = n; j > 0; j=j-1)
	{
		if (n % j == 0)
		{
			a[i] = j;
			i++;
		}
	}
}

void Bai049( int a[], int k)
{
	cout << "\n*****Start*****\n" << " Bai 049" << endl;
	cout << "Cac uoc so la: ";
	for (int i = 0; i < k; i++)
	{
		cout << a[i] << "  ";
	}
	cout << "\n___________End___________" << endl;
}

int Bai050(int a[], int k)
{
	cout << "\n*****Start*****\n" << " Bai 050" << endl;
	int S = 0;
	for (int i = 0; i < k; i++)
	{
		S = S + a[i];
	}
	cout << "tong cac uoc so la: " << S << endl ;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai051(int a[], int k)
{
	cout << "\n*****Start*****\n" << " Bai 051" << endl;
	int S = 1;
	for (int i = 0; i < k; i++)
	{
		S = S * a[i];
	}
	cout << "tich cac uoc so la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai052(int n)
{
	cout << "\n*****Start*****\n" << " Bai 052" << endl;
	int dem = SoLuongUoc(n);
	cout << "So luong uoc la: " << dem;
	cout << "\n___________End___________" << endl;
	return dem;
}

void Bai053(int a[], int k)
{
	cout << "\n*****Start*****\n" << " Bai 053" << endl;
	cout << "Cac uoc so le la: ";
	for (int i = 0; i < k; i++)
	{
		if (a[i] % 2 != 0)
		{
			cout << a[i] << "  ";

		}
	}
	cout << "\n___________End___________" << endl;
}

int Bai054(int a[], int k)
{
	cout << "\n*****Start*****\n" << " Bai 054" << endl;
	int S = 0;
	for (int i = 0; i < k; i++)
	{
		if (a[i] % 2 == 0)
		{
			S = S + a[i];

		}
	}
	cout << "tong cac uoc so chan la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai055(int a[], int k)
{
	cout << "\n*****Start*****\n" << " Bai 055" << endl;
	int S = 1;
	for (int i = 0; i < k; i++)
	{
		if (a[i] % 2 != 0)
		{
			S = S * a[i];

		}
	}
	cout << "tich cac uoc so le la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai056(int a[], int k)
{
	cout << "\n*****Start*****\n" << " Bai 056" << endl;
	int S = 0;
	for (int i = 0; i < k; i++)
	{
		if (a[i] % 2 == 0)
		{
			S++;

		}
	}
	cout << "so luong uoc so chan la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai057(int a[], int k)
{
	cout << "\n*****Start*****\n" << " Bai 057" << endl;
	int S = 0;
	for (int i = 0; i < k-1; i++)
	{
		S = S + a[i];
	}
	cout << "tong cac uoc so nhon hon n la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}
