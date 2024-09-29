#include <iostream>
#include <windows.h>
#include<string>
using namespace std;
int main()
{
	int i, a, h, S, r, b, d1, d2;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "ѕлощадь какой фигур вам нужно посчитать? 1 -  треугольник, 2 - квадрат, 3 - круга, 4 - трапеции€, 5 - ромб " << endl;
	cin >> i;
	switch (i) {
	case 1:
		cout << "¬ведите сторону треугольника " << endl;
		cin >> a;
		cout << "¬ведите высоту треугольника " << endl;
		cin >> h;
		S = (a * h) / 2;
		cout << "ѕлощадь тругольника = " << S << endl;
	}
	switch (i) {
	case 2:
		cout << "¬ведите сторону квадрата " << endl;
		cin >> a;
		S = a * a;
		cout << "ѕлощадь квадрата равна = " << S << endl;
	}
	switch (i) {
	case 3:
		cout << "¬ведите радиус круга" << endl;
		cin >> r;
		S = r * r * 3, 14;
		cout << "ѕлощадь круга равна = " << S << endl;
	}
	switch (i) {
	case 4:
		cout << "¬ведите первое основание" << endl;
		cin >> a;
		cout << "¬ведите второе основание" << endl;
		cin >> b;
		cout << "¬ведите высоту" << endl;
		cin >> h;
		S = ((a + b) / 2) * h;
		cout << "ѕлощадь трапеции равна = " << S << endl;
	}
	switch (i) {
	case 5:
		cout << "¬ведите первую диагональ ромба" << endl;
		cin >> d1;
		cout << "¬ведите вторую диагональ ромба" << endl;
		cin >> d2;
		S = (d1 * d2) / 2;
		cout << "ѕлощадь ромба равна = " << S << endl;
	}
}