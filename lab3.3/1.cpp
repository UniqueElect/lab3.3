#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const double PI = acos(-1.0);
	double x; // вхідний аргумент
    double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= (-7) - R)
		y = R;
	else
		if (-7 - R < x && x <= -7 + R)
			y = R - sqrt(R * R - x * x - 14 * x - 49);
		else
			if (-7 + R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 0)
					y = R + ((-R * x - 4 * R) / 4);
				else
					if (0 < x <= PI)
						y = sin(x);
					else
						if (PI < x)
							y = (R * x - R * PI) / (R - PI);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}