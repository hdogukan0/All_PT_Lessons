#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14159;
class testsınıf
{
	int a, b, c;
public:
	testsınıf(int sayı1, int sayı2, int sayı3);
	~testsınıf();
	void goruntule();
};
//kurucu fonksiyon
testsınıf::testsınıf(int sayı1, int sayı2, int sayı3)
{
	a = sayı1;
	b = sayı2;
	c = sayı3;

}
//yok edici fonksiyon
testsınıf::~testsınıf()
{
}
void testsınıf::goruntule()
{
	cout << "a : " << a << " , b : " << b << " , c : " << c << endl;

}

/*class testsınıf
{
private:
	int a, b;
public:
	testsınıf();
	~testsınıf();
	void goruntule();

};
//kurucu fonkiyon
testsınıf::testsınıf()
{
	a = 10;  b = 20;

}
testsınıf::~testsınıf()
{
}
void testsınıf::goruntule()
{
	cout << "a : " << a << "b : " << b << endl;
}


class kure
{
public:
	float r, x, y, z, alan(), hacim();

}k;

float kure::hacim()
{
	return (4 * pi * pow(r, 3));

}
float kure::alan()
{
	return (4 /3 * pi * pow(r, 2));

}
*/
int main()
{
	/*k.r = 1.0;
	k.x = 2.0;
	k.y = 3.0;
	k.z = 4.0;

	cout << "r : " << k.r << endl;
	cout << "x : " << k.x << endl;
	cout << "y : " << k.y << endl;
	cout << "z : " << k.z << endl;
	cout << "alan : " << k.alan() << endl;
	cout << "hacim : " << k.hacim()<< endl;
	testsınıf ts;
	ts.goruntule();*/
	testsınıf ts(25, 30, 69);
	ts.goruntule();
	return 0;
}
