//Lab_03_1.cpp
//������ ����� ³���������
//����������� ������ � 3.1
//������������, ������ ��������: ������� ���� �����.
//������ 8
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������ 
	double B; // �������� ��������� - ������������� ����� ������� ������

	cout << "x= "; cin >> x;

	A = 2 + 6*x ;

	// ����� 1: ������������ � ��������� ����
	if (x < 0)
		B = fabs(cos(x)) + x * x * x * x * x;
	if (0 < x && x <= 3)
		B = cos((1 + fabs(x))/3)/sin((1 + fabs(x)) / 3);
	if (x > 3)
		B = (x + x + x + x + x + x + x + x) + x*x*x*x*x;
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	if (x < 0)
		B = fabs(cos(x)) + x * x * x * x * x;
	else
		if (0 < x && x <= 3)
			B = cos((1 + fabs(x)) / 3) / sin((1 + fabs(x)) / 3);
		else
			B = (x + x + x + x + x + x + x + x) + x * x * x * x * x;
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
