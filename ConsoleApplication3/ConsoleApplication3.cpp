
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "RU");
	while (true) {
		float x, z; int n, c;
		cout << "укажите длину цепной дроби\n";
		cin >> n;
		double y;
		cout << "¬ведите значение x\n";
		cin >> x;
		z = 1;
		for (c = 0; c < n; c++) {
			z = z * 2;
		}
		if (n > 0) {
			switch (n) {

			case 1:
				y = 1 / x;
				cout << y << endl;
				break;

			default:
				
				double y1 = x * x * x / (x * x * x * x + z - 2);
				cout << y1 << ' ' << endl;
				break;

			}
		}


		else { cout << "¬ведена неверна€ длина цепной дроби\n" << n << endl; }


	}
}