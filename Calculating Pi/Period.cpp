#include<iostream>
#include<math.h>
using namespace std;

double PiEuler(double dt) { // ������� ��������� ����� ������� ������
	double x, v, t;
	x = 0;
	v = 1;
	t = 10;
	for (int i = 0; i<int(t / dt); ++i) {
		double a = x;
		x = x + v*dt;
		v = v - a*dt;
		if (x < 0) {
			return i*dt;
			break;
		}
	}
}

double PiMidPoint(double dt) { // ������� ��������� ����� ������� ������� �����
	double x, v;
	int f;
	x = 0;
	v = 1;
	x = x + (v*dt) / 2;
	x = x + v*dt;
	v = v - x*dt;
	while (x > 0) {
		x = x + v*dt;
		v = v - x*dt;
		f = f + 1;
	}
	return f*dt;
}

int main() { // ������� ������� �� ����� ����� ��, ����������� � ������ ���������
	double dt, dt0; 
	int p; // ���������� ������� ��������
	dt = 0.1;
	dt0 = dt; // ��������� ���
	cout << "p = ";
	cin >> p;
	if (p > 5) {
		cout << "pi must be no more than 5" << '\n';
		p = 5;
	}
	while (dt > pow(dt0,p)) {
		cout<<"for dt = "<< dt << '\t' << "pi(Euler) = " << PiEuler(dt) << '\t' << "pi(Midpoint) = " << PiMidPoint(dt) <<'\n';
		dt = dt*dt0; // ����� ���
	}
	system("pause");
	return 0;
}