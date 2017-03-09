#include<stdio.h>
#include<math.h>
#include <stdlib.h>
 double Integral (double(*func)(double), double dFrom, double dTo, double dStep); 

  int main () {
	printf ("Integral: %If\n",
		Integral(sin,0.,3.14/4.,0.01));
		system ("pause");
		return 0;
}
double Integral (double(*func)(double),  double a, double b, double x) {
  double dSum=0
	  double n = (b-a)/x
	  while ((a+nx)<=b) {dSum=dSum+sin(((2a+x)/2)*x, a+x}
	   
	  return dSum;
 } 
