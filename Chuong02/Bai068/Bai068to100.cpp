#include<iostream>
using namespace std;
#include<string>


void Nhap(int&, int&);
int Bai068(int);
int Bai069(int, int);
int Bai070(int, int);
int Bai071(int, int);
float Bai072(int);
float Bai073(int, int);
float Bai074(int, int);
float Bai075(int, int);
float Bai076(int, int);
int Bai077(int, int);
int Bai078(int, int);
int Bai079(int);
int Bai080(int, int);
int Bai081(int, int);
int Bai082(int, int);
int Bai083(int, int);
int Bai084(int, int);
int Bai085(int, int);
int Bai086(int, int);
int Bai087(int, int);
int Bai088(int);
int Bai089(int, int);
int Bai090(int, int);
int Bai091(int, int);
int Bai092(int, int);
int Bai093(int);
int Bai094(int);
int Bai095(int);
int Bai096(int);
int Bai097(int, int);
int Bai098(int);
int Bai099(int);
int Bai100(int);

int main()
{
	int n;
	int x;
	int a[100];
	string str;
	cout << "**Bai 068-080 **" << endl;
	Nhap(n, x);
	cin.ignore();
	do
	{
		cout << "\nInput 'bai068' to go to Bai08 or (bai069...bai080) to go to (Bai069...Bai080) or 'ket thuc' to end, please!" << endl;

		getline(cin, str); //lay ky tu nhap vao.
		//cout << str;
		if (str.compare("bai068") == 0)
			Bai068(n);
		else if (str.compare("bai069") == 0)
			Bai069(n,x);
		else if (str.compare("bai070") == 0)
			Bai070(n, x);
		else if (str.compare("bai071") == 0)
			Bai071(n, x);
		else if (str.compare("bai072") == 0)
			Bai072(n);
		else if (str.compare("bai073") == 0)
			Bai073(n, x);
		else if (str.compare("bai074") == 0)
			Bai074(n, x);
		else if (str.compare("bai075") == 0)
			Bai075(n, x);
		if (str.compare("bai076") == 0)
			Bai076(n, x);
		else if (str.compare("bai077") == 0)
			Bai077(n, x);
		else if (str.compare("bai078") == 0)
			Bai078(n, x);
		else if (str.compare("bai079") == 0)
			Bai079(n);
		else if (str.compare("bai080") == 0)
			Bai080(n, x);
		else if (str.compare("bai081") == 0)
			Bai081(n, x); 
		else if (str.compare("bai082") == 0)
			Bai082(n, x);
		else if (str.compare("bai083") == 0)
			Bai083(n, x);
		else if (str.compare("bai084") == 0)
			Bai084(n, x);
		else if (str.compare("bai085") == 0)
			Bai085(n, x);
		else if (str.compare("bai086") == 0)
			Bai086(n, x);
		else if (str.compare("bai087") == 0)
			Bai087(n, x);
		else if (str.compare("bai088") == 0)
			Bai088(n);
		else if (str.compare("bai089") == 0)
			Bai089(n, x);
		else if (str.compare("bai090") == 0)
			Bai090(n, x);
		else if (str.compare("bai091") == 0)
			Bai091(n, x);
		else if (str.compare("bai092") == 0)
			Bai092(n, x);
		else if (str.compare("bai093") == 0)
			Bai093(n);
		else if (str.compare("bai094") == 0)
			Bai094(n);
		else if (str.compare("bai095") == 0)
			Bai095(n);
		else if (str.compare("bai096") == 0)
			Bai096(n);
		else if (str.compare("bai097") == 0)
			Bai097(n, x);
		else if (str.compare("bai098") == 0)
			Bai098(n);
		else if (str.compare("bai099") == 0)
			Bai099(n);
		else if (str.compare("bai100") == 0)
			Bai100(n);

		else if (str.compare("ket thuc") != 0)
		{
			cout << "Input the match value, please!" << endl;
		}

	} while (str.compare("ket thuc") != 0);
	return 1;
}

void Nhap(int& n, int& x)
{
	cout << "Input n: ";
	cin >> n;
	cout << "Input x: ";
	cin >> x;
}
	



int Bai068(int n)
{
	cout << "\n*****Start*****\n" << " Bai 068" << endl;
	int t = 1;
	int S = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		S = S + t;
		i++;
	}
	cout << "Tong la " <<" la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai069(int n, int x)
{
	cout << "\n*****Start*****\n" << " Bai 069" << endl;
	int t = 1;
	int S = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		S = S + t;
		i++;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai070(int n, int x)
{
	cout << "\n*****Start*****\n" <<  endl;
	cout << " Bai 070" << endl;
	int t = 1;
	int S = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * pow(x, 2);
		S = S + t;
		i++;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai071(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 071" << endl;
	int s = x;
	int t = x;
	for (int i = 3; i <= (2 * n + 1); i = i + 2)
	{
		t *= x * x;
		s += t;
	}
	cout << "Tong la " << n << " la: " << s << "\n";
	cout << "\n___________End___________" << endl;
	return s;
}

float Bai072(int n)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 072" << endl;
	float s = 0;
	float m = 0;
	for (int i = 1; i <= n; i++)
	{
		m += i;
		s += 1 / m;
	}
	cout << "Tong la " << n << " la: " << s << "\n";
	cout << "\n___________End___________" << endl;
	return s;
}

float Bai073(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 073" << endl;
	float s = 0;
	float m = 0;
	float t = 1;
	for (int i = 1; i <= n; i++)
	{
		m += i;
		t *= x;
		s += t / m;
	}
	cout << "Tong la " << n << " la: " << s << "\n";
	cout << "\n___________End___________" << endl;
	return s;
}

float Bai074(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 074" << endl;
	float s = 0;
	float m = 1;
	float t = 1;
	for (int i = 1; i <= n; i++)
	{
		m *= i;
		t *= x;
		s += t / m;
	}
	cout << "Tong la " << n << " la: " << s << "\n";
	cout << "\n___________End___________" << endl;
	return s;
}

float Bai075(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 075" << endl;
	float s = 1;
	float m = 1 * 2;
	float t = 1;
	for (int i = 1; i <= n; i++)
	{
		t *= x * x;
		s += t / m;
		m *= (i + 2) * (i + 3);
	}
	cout << "Tong la " << n << " la: " << s << "\n";
	cout << "\n___________End___________" << endl;
	return s;
}

float Bai076(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 076" << endl;
	float s = 1;
	float m = 1;
	float t = x;
	for (int i = 1; i <= (2 * n + 1); i += 2)
	{
		s += t / m;
		t *= x * x;
		m *= (i + 1) * (i + 2);
	}
	cout << "Tong la " << n << " la: " << s << "\n";
	cout << "\n___________End___________" << endl;
	return s;
}

int Bai077(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 077" << endl;
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += pow(i, x);
	}
	cout << "Tong la " << n << " la: " << s << "\n";
	cout << "\n___________End___________" << endl;
	return s;
}

int Bai078(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 078" << endl;
	int s = 1;
	int temp = x;
	for (int i = 1; i <= n; i++)
	{
		s += temp;
		temp *= x;
	}
	cout << "Tong la " << n << " la: " << s << "\n";
	cout << "\n___________End___________" << endl;
	return s;
}

int Bai079(int n)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 079" << endl;
	int s = 0;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t *= i;
		s += i * t;
	}
	cout << "Tong la " << n << " la: " << s << "\n";
	cout << "\n___________End___________" << endl;
	return s;
}

int Bai080(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 080" << endl;
	int s = 1;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		s += (i + 1) * t;
	}
	cout << "Tong la " << n << " la: " << s << "\n";
	cout << "\n___________End___________" << endl;
	return s;
}

int Bai081(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 081" << endl;
	int i = 1;
	int M = x;
	float S = 1.0 / x;
	while (i <= n)
	{
		M = M * (x + i);
		S = S + 1.0 / M;
		i = i + 1;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai082(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 082" << endl;
	int i = 1;
	float T = 1;
	float S = 0;
	while (i <= n)
	{
		T = T * sin(x);
		S = S + T;
		i = i + 1;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai083(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 083" << endl;
	int i = 1;
	int T = 1;
	float S = 0;
	while (i <= n)
	{
		T = T * x;
		S = S + sin(T);
		i = i + 1;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai084(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 084" << endl;
	int i = 1;
	float T = x;
	float S = 0;
	while (i <= n)
	{
		T = sin(T);
		S = S + T;
		i = i + 1;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai085(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 085" << endl;
	int i = 1;
	int T = 1;
	int S = 0;
	int dau = 1;
	while (i <= n)
	{
		T = T * x;
		S = S + dau * T;
		i = i + 1;
		dau = -dau;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai086(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 086" << endl;
	int i = 1;
	int T = 1;
	int S = 0;
	int dau = -1;
	while (i <= n)
	{
		T = T * x * x;
		S = S + dau * T;
		i = i + 1;
		dau = -dau;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai087(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 087" << endl;
	int i = 1;
	int T = 1;
	int S = x;
	int dau = -1;
	while (i <= n)
	{
		T = pow(x, 2 * i + 1);
		S = S + dau * T;
		i = i + 1;
		dau = -dau;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai088(int n)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 088" << endl;
	int dau = 1;
	int i = 1;
	int M = 0;
	float S = 0;
	while (i <= n)
	{
		M = M + i;
		S = S + dau * 1.0 / M;
		i = i + 1;
		dau = -dau;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai089(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 089" << endl;
	int i = 1;
	int T = 1;
	int M = 0;
	float S = 0;
	int dau = -1;
	while (i <= n)
	{
		T = T * x;
		M = M + i;
		S = S + dau * (float)T / M;
		i = i + 1;
		dau = -dau;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai090(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 090" << endl;
	int i = 1;
	int T = 1;
	int M = 1;
	float S = 0;
	int dau = -1;
	while (i <= n)
	{
		T = T * x;
		M = M * i;
		S = S + dau * (float)T / M;
		i = i + 1;
		dau = -dau;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai091(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 091" << endl;
	float S = -1;
	int T = 1, M = 1;
	int dau = 1, i = 2;
	while (i <= 2 * n)
	{
		T = T * x * x;
		M = M * (i - 1) * i;
		S = S + dau * float(T) / M;
		dau = -dau;
		i = i + 2;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai092(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 092" << endl;
	float S = 1 - x;
	int T = x, M = 1;
	int dau = 1, i = 3;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		M = M * (i - 1) * i;
		S = S + dau * float(T) / M;
		dau = -dau;
		i = i + 2;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai093(int n)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 093" << endl;
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = sqrt(2 + S);

		i = i + 1;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai094(int n)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 094" << endl;
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = sqrt(i + S);

		i = i + 1;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai095(int n)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 095" << endl;
	float S = 0;
	int i = n;
	while (i >= 1)
	{
		S = sqrt(i + S);

		i = i--;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai096(int n)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 096" << endl;
	float S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		S = sqrt(T + S);

		i = i++;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai097(int n, int x)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 097" << endl;
	float S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * x;
		S = sqrt(T + S);

		i = i++;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai098(int n)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 098" << endl;
	float S = 0;
	int i = 2;
	while (i <= n)
	{
		S = pow(S + i, float(1) / i);
		i = i++;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai099(int n)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 099" << endl;
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = pow(S + i, float(1) / (i + 1));
		i = i++;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}

int Bai100(int n)
{
	cout << "\n*****Start*****\n" << endl;
	cout << " Bai 100" << endl;
	float S = 0;
	int T = 1;
	int i = 1;
	while (i <= n)
	{
		T = T * i;
		S = pow(T + S, float(1) / (i + 1));

		i = i++;
	}
	cout << "Tong la " << n << " la: " << S << "\n";
	cout << "\n___________End___________" << endl;
	return S;
}