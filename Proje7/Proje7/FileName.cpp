#include <iostream>
#include <iomanip>

using namespace std;

//biçimlendirme kullanýmý

int main()
{
	double s1 = 12.34;
	double s2 = 2.764;
	double s3 = 839.5;

	cout << "s1 : " << s1 << "\n";
	cout << "s2 : " << s2 << "\n";
	cout << "s3 : " << s3 << "\n";
	cout.setf(ios::scientific);
	cout << "s1 : " << s1 << "\n";
	cout << "s2 : " << s2 << "\n";
	cout << "s3 : " << s3 << "\n";
	cout.unsetf(ios::scientific);

	int sayý = 2047;

	cout << "sayi : " << sayý << " hex (altili) : " << hex << sayý
		<< " oct(sekizli) : " << oct << sayý << "\n";
	cout << "hex : " << hex << 0X7ff << " " << "dec : " << dec << 0X7ff << "\n";
	double s4 = 134;
	double s5 = 2764;
	double s6 = 83.525;

	cout.precision(3);
	cout << s4 << "\n";
	cout.width(20);
	cout << s5 << "\n";
	cout.width(20);
	cout.setf(ios::left || ios::fixed);
	cout << s6 << "\n";
	cout << setprecision(3);
	cout << s4 << "\n";
	cout << setw(20);
	cout << setfill('*') << s5 << "\n";
	cout << setw(20);
	cout << left;
	cout << s6 << "\n";

	return 0;

}