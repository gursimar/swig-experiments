#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ds.h"
	
char toReturn[500] ="";
char str[5];


void readArgs_arr(int** arr1,int *m)
{
	int len;
	int *answer;
	scanf("%d",&len);
	int arr1[len];
	for(int i=0;i<len;i++)
		scanf("%d",&arr1[i]);
    
}

char *toString_arr(int *ans,int len)
{
	if(len %2 == 0)
		len = len/2;
	else
		len = len/2 + 1;

    int i;
	for(i=0;i<len;i++)
	{
		sprintf(str, "%d", ans[i]);
		strcat(toReturn,str);
		if(i<len-1)
		strcat(toReturn," ");
	}
	return toReturn;
}