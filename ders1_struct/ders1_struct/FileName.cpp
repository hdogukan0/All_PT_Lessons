#include <iostream>
using namespace std;
//struct TANIMLAMASI
struct personel

{
	int numara;
	char ad�[20];
	char soyad�[20];
	double ucret;
};

int main()
{
	personel p;
	cout << "NUMARA GIRINIZ : ";
	cin >> p.numara;
	cout << "\n";
	cout << "ADI GIRINIZ : ";
	cin >> p.ad�;
	cout << "\n";
	cout << "SOYADI GIRINIZ : ";
	cin >> p.soyad�;
	cout << "\n";
	cout << "UCRET GIRINIZ : ";
	cin >> p.ucret;
	cout << "\n";
	cout << "personl numarasi : " << p.numara << endl;
	cout << "personl adi : " << p.ad� << endl;
	cout << "personl soyadi : " << p.soyad� << endl;
	cout << "personl ucret : " << p.ucret << endl;
	return 0;

}


