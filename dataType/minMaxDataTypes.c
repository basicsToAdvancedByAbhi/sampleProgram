/*
Author : basicsToAdvancedByAbhi
Copyright : GPL
*/
#include <stdio.h>
#include <limits.h>
#include <wchar.h>
#include <float.h>

int main() 
{
    printf("CHAR_BIT   : %d\n", CHAR_BIT);
    printf("CHAR_MIN   : %d\n", CHAR_MIN);
    printf("CHAR_MAX   : %d\n\n", CHAR_MAX);
    printf("SCHAR_MIN  : %d\n", SCHAR_MIN);
    printf("SCHAR_MAX  : %d\n", SCHAR_MAX);
    printf("UCHAR_MAX  : %d\n\n", UCHAR_MAX);
    printf("WCHAR_MIN  : %d\n", WCHAR_MIN);
    printf("WCHAR_MAX  : %d\n\n", WCHAR_MAX);
    printf("SHRT_MIN   : %d\n", SHRT_MIN);
    printf("SHRT_MAX   : %d\n", SHRT_MAX);
    printf("USHRT_MAX  : %d\n\n", USHRT_MAX);
    printf("INT_MIN    : %d\n", INT_MIN);
    printf("INT_MAX    : %d\n", INT_MAX);
    printf("UINT_MAX   : %u\n\n", UINT_MAX);
    printf("LONG_MIN   : %ld\n", LONG_MIN);
    printf("LONG_MAX   : %ld\n", LONG_MAX);
    printf("ULONG_MAX  : %lu\n\n", ULONG_MAX);
    printf("FLT_MIN    : %g\n", FLT_MIN);
    printf("FLT_MAX    : %g\n\n", FLT_MAX);
    printf("DBL_MIN    : %g\n", DBL_MIN);
    printf("DBL_MAX    : %g\n", DBL_MAX);
    printf("LDBL_MAX   : %Lg\n\n", LDBL_MAX);
    printf("FLT_MIN    : %f\n", FLT_MIN);
    printf("FLT_MAX    : %f\n\n", FLT_MAX);
    printf("DBL_MIN    : %f\n", DBL_MIN);
    printf("DBL_MAX    : %f\n", DBL_MAX);
    printf("LDBL_MAX   : %Lf\n", LDBL_MAX);
    return 0;
}
