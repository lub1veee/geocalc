#include <iostream>
#include <windows.h>
#include<string>
using namespace std;
int main()
{
	int i, a, h, S, r, b, d1, d2;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������� ����� ����� ��� ����� ���������? 1 -  �����������, 2 - �������, 3 - �����, 4 - ���������, 5 - ���� " << endl;
	cin >> i;
	switch (i) {
	case 1:
		cout << "������� ������� ������������ " << endl;
		cin >> a;
		cout << "������� ������ ������������ " << endl;
		cin >> h;
		S = (a * h) / 2;
		cout << "������� ����������� = " << S << endl;
	}
	switch (i) {
	case 2:
		cout << "������� ������� �������� " << endl;
		cin >> a;
		S = a * a;
		cout << "������� �������� ����� = " << S << endl;
	}
	switch (i) {
	case 3:
		cout << "������� ������ �����" << endl;
		cin >> r;
		S = r * r * 3, 14;
		cout << "������� ����� ����� = " << S << endl;
	}
	switch (i) {
	case 4:
		cout << "������� ������ ���������" << endl;
		cin >> a;
		cout << "������� ������ ���������" << endl;
		cin >> b;
		cout << "������� ������" << endl;
		cin >> h;
		S = ((a + b) / 2) * h;
		cout << "������� �������� ����� = " << S << endl;
	}
	switch (i) {
	case 5:
		cout << "������� ������ ��������� �����" << endl;
		cin >> d1;
		cout << "������� ������ ��������� �����" << endl;
		cin >> d2;
		S = (d1 * d2) / 2;
		cout << "������� ����� ����� = " << S << endl;
	}
}