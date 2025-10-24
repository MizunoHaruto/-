#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    
    printf("double precision:%d\n", DBL_DIG);
    printf("int maximum:%d\n", INT_MAX);
    printf("int minimum:%d\n", INT_MIN);
    printf("float maximum:%f\n", FLT_MAX);
    printf("float minimum:%g\n", FLT_MIN);
    printf("long double maximum:%Lf\n", LDBL_MAX);
    printf("long double minimum:%Le\n", LDBL_MIN);
    printf("char maximum:%d\n", CHAR_MAX);
    printf("char minimum:%d\n", CHAR_MIN);
    return 0;
}