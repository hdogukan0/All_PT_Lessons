#include <iostream>
#include <cstring>
#include <string>

using namespace std;
struct sayı
{
	int i;
	int j;

}degerler = { 5,23 };
void yaz(struct sayı x);
struct koordinat
{
	int x;
	int y;

}k = { 12,25 };
struct personel
{
	int numara;
	char adı[30];
	double ucret;

}p1, p2;

int main()
{
yenidenal:
	cout << "PERSONAL NUMARASI GIR: " << endl;
	cin >> p1.numara;
	//p1.numara = 99999;
	if (p1.numara <= 0)
	{
		cout << "NEGATIF NUMARA GIRILMEZ TEKRAR GIRINIZ!!" << endl;
		goto yenidenal;
	}
	strcpy_s(p1.adı, "CEMAL GURSEL");
	p1.ucret = 10500.750;
	cout << "NUMARA      :" << p1.numara << endl;
	cout << "ADI         :" << p1.adı << endl;
	cout << "UCRET       :" << p1.ucret << endl;
	cout << "\n";
	p2.numara = 6666;
	strcpy_s(p2.adı, "CEVDET SUNAY");
	p2.ucret = 7500.89;
	cout << "\n \n";
	cout << "NUMARA      :" << p2.numara << endl;
	cout << "ADI         :" << p2.adı << endl;
	cout << "UCRET       :" << p2.ucret << endl;
	cout << "\n";
	cout << "X KORDINATI: " << k.x << endl;
	cout << "Y KORDINATI: " << k.y << endl;
	yaz(degerler);
	return 0;



}
void yaz(struct sayı x)
{
	cout << "X DEGERI = " << degerler.i << endl;
	cout << "Y DEGERI = " << degerler.j << endl;

}