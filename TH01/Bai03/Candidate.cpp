#include "Candidate.h"

void Candidate::Nhap()
{
	cout << "Input candidate code:";
	cin.ignore();
	getline(cin, Code);
	cout << "Input candidate full name:";
	getline(cin, FullName);
	cout << "Input candidate birthdate:";
	cin.ignore();
	getline(cin, BirthDate);
	cout << "Input candidate math score:";
	cin >> MathScore;
	cout << "Input candidate van score:";
	cin >> VanScore;
	cout << "Input candidate english score:";
	cin >> EnglishScore;
}

void Candidate::Xuat()
{
	cout << "****** \ncadidate code: " << Code << "\n";
	cout << "candidate full name: " << FullName << "\n";
	cout << "candidate birthdate: " << BirthDate << "\n";
	cout << "candidate math score: " << MathScore << "\n";
	cout << "candidate van score: " << VanScore << "\n";
	cout << "candidate english score: " << EnglishScore << "\n";

}
