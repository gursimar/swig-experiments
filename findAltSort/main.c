#include <stdio.h>
#include "ds.h"
#include "source.h"
#include <valgrind/callgrind.h>
int main() {
	int len;
	int i,*answer;
	scanf("%d",&len);
	int arr1[len];
	for(i=0;i<len;i++)
		scanf("%d",&arr1[i]);
	//fromstring(arr1,len);
	
	CALLGRIND_TOGGLE_COLLECT;
	answer = findAltSort(arr1,len);
	CALLGRIND_TOGGLE_COLLECT;
	
	if(len %2 == 0)
		len = len/2;
	else
		len = len/2 + 1;
	printf(""%s"",toString_arr(answer,len));
}