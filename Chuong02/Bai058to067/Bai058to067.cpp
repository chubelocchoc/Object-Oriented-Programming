#include<iostream>
using namespace std;
#include<string>


void Nhap(int&);
int SoLuongChuSo(int);
void LuuGiaTri(int[], int);
int Bai058(int[], int);
int Bai059(int);
int Bai060(int[], int);
int Bai061(int);
int Bai062(int);
int Bai063(int);
int Bai064(int);
int Bai065(int);
int Bai066(int);
int Bai067(int);

int main()
{
	int n;
	int a[100];
	string str;
	cout << "**Bai 058-067 **" << endl;
	Nhap(n);
	int k = SoLuongChuSo(n);
	LuuGiaTri(a, n);
	cin.ignore();
	do
	{
		cout << "\nInput 'bai058' to go to Bai058 or (bai059...bai067) to go to (Bai059...Bai067) or 'ket thuc' to end, please!" << endl;

		getline(cin, str); //lay ky tu nhap vao.
		//cout << str;
		if (str.compare("bai058") == 0)
			Bai058(a, k);
		else if (str.compare("bai059") == 0)
			Bai059(k);
		else if (str.compare("bai060") == 0)
			Bai060(a, k);
		else if (str.compare("bai061") == 0)
			Bai061(n);
		else if (str.compare("bai062") == 0)
			Bai062(n);
		else if (str.compare("bai063") == 0)
			Bai063(n);
		else if (str.compare("bai064") == 0)
			Bai064(n);
		else if (str.compare("bai065") == 0)
			Bai065(n);
		else if (str.compare("bai066") == 0)
			Bai066(n);
		else if (str.compare("bai067") == 0)
			Bai067(n);

		else if (str.compare("ket thuc") != 0)
			cout << "Input the match value, please!" << endl;

	} while (str.compare("ket thuc") != 0);
	return 1;
}

void Nhap(int& n)
{
	cout << "Input the interger: ";
	cin >> n;
}

int SoLuongChuSo(int n)
{
	int sl = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		sl++;
		t = t / 10;
	}
	return sl;
}

void LuuGiaTri(int a[], int n)
{
	int i = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		a[i] = dv;
		i++;
		t = t / 10;
	}
}

int Bai058(int a[], int sl)
{
	cout << "\n*****Start*****\n" << " Bai 058" << endl;
	int S = 0;
	for (int i = 0; i < sl; i++)
	{
		S = S + a[i];
	}
	cout << "Tong cac chu so la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai059(int n)
{
	cout << "\n*****Start*****\n" << " Bai 059" << endl;
	int sl = n;
	cout << "so luong chu so la: " << sl << endl;
	cout << "\n___________End___________" << endl;
	return sl;
}

int Bai060(int a[], int sl)
{
	cout << "\n*****Start*****\n" << " Bai 060" << endl;
	int S = 1;
	for (int i = 0; i < sl; i++)
	{
		S = S * a[i];
	}
	cout << "Tich cac chu so la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai061(int n)
{
	cout << "\n*****Start*****\n" << " Bai 061" << endl;
	int S = 0;
	int t = n;
	while (t != 0)
	{
		int cs = (t % 10) + 1;
		if (cs % 2 != 0)
		{
			S = S + 1;
		}
		t = t / 10;
	}
	cout << "so luong chu so la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai062(int n)
{
	cout << "\n*****Start*****\n" << " Bai 062" << endl;
	int S = 0;
	int t = n;
	while (t != 0)
	{
		int cs = (t % 10) + 1;
		if (cs % 2 == 0)
		{
			S = S + cs;
		}
		t = t / 10;
	}
	cout << "Tong chu so chan la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai063(int n)
{
	cout << "\n*****Start*****\n" << " Bai 063" << endl;
	int S = 1;
	int t = n;
	while (t != 0)
	{
		int cs = (t % 10) + 1;
		if (cs % 2 != 0)
		{
			S = S * cs;
		}
		t = t / 10;
	}
	cout << "Tich chu so le la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai064(int n)
{
	cout << "\n*****Start*****\n" << " Bai 064" << endl;
	int S = n % 10;
	int t = n;
	while (t != 0)
	{
		int cs = (t % 10);
		if (cs >= S)
		{
			S = cs;
		}
		t = t / 10;
	}
	cout << "Chu so lon nhat la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai065(int n)
{
	cout << "\n*****Start*****\n" << " Bai 065" << endl;
	int S = n % 10;
	int t = n;
	while (t != 0)
	{
		int cs = (t % 10);
		if (cs <= S)
		{
			S = cs;
		}
		t = t / 10;
	}
	cout << "Chu so nho nhat la: " << S << endl;
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai066(int n)
{
	cout << "\n*****Start*****\n" << " Bai 066" << endl;
	int i = n;
	int flag = 0;
	int vd;
	while (i != 0)
	{
		int dv = i % 10;
		if (dv % 2 == 0)
		{
			flag = 1;
			vd = dv;
		}


		i = i / 10;
	}
	if (flag == 1)
	{
		cout << "co ton tai, vd: " << vd << endl;
	}
	else
		cout << "khong ton tai" << endl;
	cout << "\n___________End___________" << endl;
	return vd;
}

int Bai067(int n)
{
	cout << "\n*****Start*****\n" << " Bai 067" << endl;
	int i = n;
	int flag = 0;
	int vd;
	while (i != 0)
	{
		int dv = i % 10;
		if (dv % 2 != 0)
		{
			flag = 1;
			vd = dv;
		}


		i = i / 10;
	}
	if (flag == 1)
	{
		cout << "co ton tai, vd: " << vd << endl;
	}
	else
		cout << "khong ton tai" << endl;
	cout << "\n___________End___________" << endl;
	return vd;
}


