#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
	double arr[10][5][6];
	int i, j, k;
	srand(time(NULL));

	for (i=0; i<10; i++)
		for (j=0; j<5; j++)
			for (k=0; k<6; k++)
				arr[i][j][k]=(double) rand() / RAND_MAX;

	for (i=0; i<10; i++)
		for (j=0; j<5; j++)
			for (k=0; k<6; k++)
				printf("arr [  %d  ][  %d  ][  %d  ] = %f\n", i, j, k, arr[i][j][k]);
	printf("\n");
	printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");



	return 0;
}