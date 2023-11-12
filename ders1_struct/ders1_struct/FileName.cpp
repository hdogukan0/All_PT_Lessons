#include <iostream>
using namespace std;
//struct TANIMLAMASI
struct personel

{
	int numara;
	char adý[20];
	char soyadý[20];
	double ucret;
};

int main()
{
	personel p;
	cout << "NUMARA GIRINIZ : ";
	cin >> p.numara;
	cout << "\n";
	cout << "ADI GIRINIZ : ";
	cin >> p.adý;
	cout << "\n";
	cout << "SOYADI GIRINIZ : ";
	cin >> p.soyadý;
	cout << "\n";
	cout << "UCRET GIRINIZ : ";
	cin >> p.ucret;
	cout << "\n";
	cout << "personl numarasi : " << p.numara << endl;
	cout << "personl adi : " << p.adý << endl;
	cout << "personl soyadi : " << p.soyadý << endl;
	cout << "personl ucret : " << p.ucret << endl;
	return 0;

}


