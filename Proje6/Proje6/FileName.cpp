#include <iostream>
using namespace std;

int main()
{
	char dizi[100];
	int i, n;

	long *q;
	cout << "KAC TANE SAYI GIRECEKSINIZ : ";
	cin >> i;
	cout << "\n";
	q = new long[i]; // new kodu bellekte yer ay�rmam�z� sa�lar k��eli parantez i�indeki int de�i�keni olan i ise bellekte ka� b�l�m ay�rmam�z� sa�lar� i ye ka� girilirse okdr b�lme ay�r�r.
	if (!q)
	{
		cout << "BELLEKTE YER AYIRTMA" << endl;
		return 1;

	}
	/* *q = 1000;
	cout << "DEGER : " << *q << endl;
	// BELLEK ALANINI iADE ETMEK
	delete q;*/
	for (n = 0; n < i; n++)
	{
		cout << "sayi " << n + 1 << endl;
		cin >> dizi;
		q[n] = atol(dizi); //atol atoi ve atof string veya char dizisindeki yaz�y� atol long'a atoi integer'a atof ise float 'a atamam�z� sa�lar 
		// yani burda char de�i�keni olan dizi ye girilen say�lar� rakamlar� q[n] olan long de�i�kenine at�yor

	}
	cout << "girilen degerler :  ";
	for (n = 0; n < i; n++)
	{
		cout << q[n] << ", ";
	}
	cout << "\n";
	delete[] q;
	return 0;
}