#include <stdio.h>
#include <math.h>
#include "tchk.h"

#define DELTA 0.000001

double intriangle(double ax, double bx,double cx,double ox,double ay,double by,double cy,double oy)
{

    double m;
    double n;
	int k;
	

    m = squareof(ax,bx,cx,ay,by,cy);

    n = squareof(ox,bx,cx,oy,by,cy) + squareof(ax,ox,cx,ay,oy,cy) + squareof(ax,bx,ox,ay,by,oy);

printf("m=%lf, n=%lf\n", m, n);

    if ( abs(m - n) < DELTA) {
        k = 1;
    }
    else {
        k = 0;
    }
    return k;
}