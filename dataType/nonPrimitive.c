/*
Author : basicsToAdvancedByAbhi
Copyright : GPL
*/
#include "stdio.h"
#include <stdbool.h>

enum Color
{
	RED,
	GREEN,
	YELLOW,
	BLUE
};

struct sTrain
{
	char       sName[10];
	int        iNumber;
	char       cDivision;   
	float      fTotalDistance;   
	bool       bFreightTrain;  
        enum Color eTrainColor;
};

union uTrain
{
	char       sName[10];
	int        iNumber;
	char       cDivision;   
	float      fTotalDistance;   
	bool       bFreightTrain;  
        enum Color eTrainColor;
};


int main()
{
	struct sTrain structTrainInfo= { "XYZ",
		102,
		'N',
		158.67,
		false
	};
	printf("sizeof struct sTrain : %lu bytes \n", sizeof(struct sTrain));
	printf("sizeof of array sName: %lu bytes \n", sizeof(structTrainInfo.sName));
	printf("sizeof of union      : %lu bytes \n", sizeof(union uTrain));
	printf("sizeof of char *     : %lu bytes \n", sizeof(char *));
	printf("sizeof of int  *     : %lu bytes \n", sizeof(int *));
	printf("sizeof of enum       : %lu bytes \n", sizeof(enum Color));
}













#if 0
printf("Train Name : %s\n", structTrainInfo.sName);
printf("Train Number : %d\n", structTrainInfo.iNumber);
printf("Train Division : %c\n", structTrainInfo.cDivision);
printf("Train Total distance to be covered : %f\n", structTrainInfo.fTotalDistance);
printf("Is Freight Train : %s\n", structTrainInfo.bFreightTrain?"YES":"NO");
#endif
