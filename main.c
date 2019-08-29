#include "ft_printf.h"
#include <float.h>
#include <stdio.h>
#include <math.h> 

int main()
{
    float arg1 = NAN;
    double arg2 = INFINITY;
    long double arg3 = LDBL_MAX - 3;
    ft_printf( "%15.8f|%-15.8f|%+15.8f|% 15.8f|%#15.8f|%015.8f", DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN);
    ft_printf("\n");
   printf( "%15.8f|%-15.8f|%+15.8f|% 15.8f|%#15.8f|%015.8f", DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN, DBL_MIN);
    return (0);
}