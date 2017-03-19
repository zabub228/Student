#include <iostream>
using namespace std;

int main() {
	double x, v, t, dt;
	x = 0;
	v = 1;
	cout << "t = ";
	cin >> t;
	cout <<'\n'<< "dt = ";
	cin >> dt;
	for (int i = 0; i<int(t / dt); ++i) {
		double a = x;
		x = x + v*dt;
		v = v - a*dt;
		cout <<"x = "<< x << "," <<'\t'<< "v = " << v << '\n';
	}
	system("pause");
	return 0;
}