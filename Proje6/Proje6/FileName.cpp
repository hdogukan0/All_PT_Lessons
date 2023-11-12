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
	q = new long[i]; // new kodu bellekte yer ayýrmamýzý saðlar köþeli parantez içindeki int deðiþkeni olan i ise bellekte kaç bölüm ayýrmamýzý saðlarý i ye kaç girilirse okdr bölme ayýrýr.
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
		q[n] = atol(dizi); //atol atoi ve atof string veya char dizisindeki yazýyý atol long'a atoi integer'a atof ise float 'a atamamýzý saðlar 
		// yani burda char deðiþkeni olan dizi ye girilen sayýlarý rakamlarý q[n] olan long deðiþkenine atýyor

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