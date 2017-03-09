#include<stdlib.h>
#include<stdio.h>

int GCD(int x,int y) {
	if (x<0) {
		return GCD(-x,y);
			 }
	else if (y<0) {
		return GCD (x,-y);
				  }
		else if (x<y) {
					return GCD (x, y-x);
					  }
			 else if (x>y) {
						return GCD (x-y,y);
						   }
					else {
						return x;
						 }
 return x;
}

int main () {
	int a, b, gcd;
	printf("enter a: ");
	scanf("%d", &a);
	printf("enter b: ");
	scanf("%d", &b);
	gcd = GCD(a,b);
	printf("%d", gcd);
	printf("\n");
	system("pause");
	return 0;
}