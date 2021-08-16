#include <iostream>
#include <conio.h>
#include <cmath>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {

	float f = 6.0F;

	// check for +ve infinite value
	cout << "isinf(6.0/4.0) is = " << isinf(f / 4.0) << endl;

	// check for -ve infinite value
	f = -1.2F;
	cout << "isinf(-1.2/3.0) is = " << isinf(f / 3.0) << endl;

	_getch();
	return 0;
}
