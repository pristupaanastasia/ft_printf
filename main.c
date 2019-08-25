#include "ft_printf.h"
#include <float.h>
#include <stdio.h>
#include <math.h> 

int main()
{
    float arg1 = NAN;
    double arg2 = INFINITY;
    long double arg3 = LDBL_MAX - 3;
     ft_printf( "%.f|%-.f|%+.f|% .f|%#.f|%0.f\n", DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN);
    printf( "%.f|%-.f|%+.f|% .f|%#.f|%0.f", DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN);
    
    return (0);
}