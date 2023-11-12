#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14159; //pi sabit sayıdır.

class kure
{
public:
	float r;
	float x, y, z;
	float hacim()
	{
		return (4 / 3 * pi * r * r * r);

	}
	float alan()
	{
		return (4 * pi * r * r);

	}

}k;


int main()
{
	k.r = 1.0;
	k.x = 2.0;
	k.y = 3.0;
	k.z = 4.0;
	cout << " YARI CAP = " << k.r << endl;
	cout << " X        = " << k.x << endl;
	cout << " Y        = " << k.y << endl;
	cout << " Z        = " << k.z << endl;
	cout << " ALAN     = " << k.alan() << endl;
	cout << " HACIM    = " << k.hacim() << endl;
	return 0;
}