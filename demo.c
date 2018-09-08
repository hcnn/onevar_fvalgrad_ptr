#include <stdio.h>  // printf
#include "onevar_fvalgrad_ptr.h"

void myfunc(double* out, double x, const double* param){
    if( param == NULL){printf("no param\n");}
    out[0] = 123 * x;
    out[1] = 456 * x;
}

int main()
{
    ONEVAR_FVALGRAD_PTR f = &myfunc;
    double out[2];

    f(out, 2, NULL);
    double fval = out[0];
    double grad = out[1];

    printf("%5s: %5.0f\n%5s: %5.0f\n", "fval", fval, "grad", grad);
	return 0;
}
