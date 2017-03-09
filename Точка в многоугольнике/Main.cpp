#include <stdio.h>
#include <stdlib.h>
#include "tchk.h"

int main()
{
    double ax;
    double ay;
    double bx;
    double by;
    double cx;
    double cy;
    double ox;
    double oy;
    int N;
	int i;
    double x[228];
	double y[228];
	int l;
	l = 0;

	printf("enter x of point 0: ");
    scanf("%lf",&ox);
    printf("enter x of point 0: ");
    scanf("%lf",&oy);

	printf("enter the amount of points: ");
    scanf("%d",&N);

	if (N<=2) {
		printf("N must be more than 2");
		return 1;
	}

	printf("enter x of point 1: ");
    scanf("%lf", x);
    printf("enter y of point 1: ");
    scanf("%lf", y);

	printf("enter x of point 2: ");
    scanf("%lf",x + 1);
    printf("enter y of point 2: ");
    scanf("%lf",y + 1);

	printf("enter x of point 3: ");
    scanf("%lf",x + 2);
    printf("enter y of point 3: ");
    scanf("%lf",y + 2);

	if (N==3){
		if (intriangle(x[0], x[1], x[1], ox, y[0], y[1], y[2], oy) == 1) {
			printf("yes");
		}
		else {
			printf("no");
		}
	}
	else {
		for (i=3; i<N; i++) {
			printf("enter x of point %d:", i+1);
			scanf("%lf", x +i);
			printf("enter y of point %d:", i+1);
			scanf("%lf", y +i);
			l = l + intriangle(x[i-3], x[i-2], x[i-1], ox, y[i-3], y[i-2], y[i-1], oy);
		}
	}
	
	if (l != 0) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}


    //printf("Введите количество вершин многоугольника: ");
    //scanf("%d",&N);

   // for (i=0; i<N, i++)
    //{
    //    intriangle(ax,bx,cx,ox,ay,by,cy,oy)
    //}

	system("pause");
    return 0;
}