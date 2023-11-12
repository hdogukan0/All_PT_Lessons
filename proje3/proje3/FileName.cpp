#include <iostream>
#include <cstring>
#include <string>
using namespace std;
union personel
{
	int numara;
	char adý[20];
	double ucret;

};
struct
{
	int i;
	char katar[20];

}k, * p;

int main()
{
	p = &k;
	k.i = 10;
	p->i = 20;

	strcpy_s(p->katar, "DENEMELER");

	cout << k.i << endl;
	cout << p->i << endl;
	cout << p->katar << endl;
	cout << "YAPININ ADRESI : " << p << endl;
	personel p;

	p.numara = 1;
	cout << "NUMARA : " << p.numara << endl;

	p.ucret = 9.5;
	cout << "UCRET : " << p.ucret << endl;

	strcpy_s(p.adý, "PROGRAMLAMA");
	cout << "ADI : " << p.adý << endl;

	return 0;

}