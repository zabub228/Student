#include "tchk.h"
#include <math.h>

double squareof(double xa, double xb, double xc, double ya, double yb, double yc)
    {
        double s = abs(((xa-xc)*(yb-yc)-(xb-xc)*(ya-yc))/2.);
        return s;
    }
