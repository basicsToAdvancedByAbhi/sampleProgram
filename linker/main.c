#include<stdio.h>
#include "calculator.h"

int gDivisor=10;
int gVariable;

int main()
{
	int dividend=90;

        int quotient = divide(dividend,gDivisor);
        
	//print the quotient
	printf("\nQuotient is : %d \n", quotient);

        //call add & print the result
	printf("\nSum of %d, %d : %d \n", 1, 2, add(1, 2));

	return 0;
}
