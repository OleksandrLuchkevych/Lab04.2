#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "-----------------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(6) << " |"
		<< setw(7) << "y" << setw(8) << " |" << endl;
	cout << "-----------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x < 0)
		y = fabs(4 * x - 1) + pow(x, 7) - 2 * x;
		else
			if (x >= 0 && x < 3)
			y = fabs(4 * x - 1) + atan((exp(x) + 1) / 8);
			else
				y = fabs(4 * x - 1) + pow(x, 4) + exp(x * x + 3);

		cout << "|" << setw(6) << setprecision(2) << x << setw(5)
			<< " |" << setw(8) << setprecision(3) << y << setw(7)
			<< " |" << endl;
		x += dx;
	}

	cout << "-----------------------------" << endl;

	return 0;
}