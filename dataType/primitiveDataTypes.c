/*
Author : basicsToAdvancedByAbhi
Copyright : GPL
*/
#include "stdio.h"
#include "stdbool.h"
#include "wchar.h"

void main()
{
    printf("sizeof char : %lu byte\n", sizeof(char));
    printf("sizeof int  : %lu bytes\n", sizeof(int));
    printf("sizeof float: %lu bytes\n", sizeof(float));
    printf("sizeof double : %lu bytes\n", sizeof(double));
    printf("sizeof bool   : %lu bytes\n", sizeof(bool));
    printf("sizeof wchar_t: %lu bytes\n", sizeof(wchar_t));
    printf("sizeof void   : %lu bytes\n", sizeof(void));
}
