#include<iostream>
#include<math.h>
using namespace std;

double Period(double A) { // функция принимает на вход амплитуду и считает период
	double T, x, v, dt;
	int f; // флаг
	f = 0;
	dt = 0.0001;
	v = 0;
	x = A;
	v = v - abs((sin(x)*dt) / 2);
	x = x + v*dt;
	v = v - x*dt;
	while (x < A) {
		x = x + v*dt;
		v = v - sin(x)*dt;
		f = f + 1;
	}
	return f*dt;
}

int main() { // функция перебирает амплитуды и сопостовляет им периоды
	double x, v, dt, A;
	A = 10;
	for (A; A < 31.3; A++) {
		cout << "T(" << A/10 << ") = " << Period(A/10) << '\n';
	}
	system("pause");
	return 0;
}