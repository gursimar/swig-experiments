#include <stdio.h>
#include<malloc.h>
// ADD ANY OTHER HEADER FILE IF NEEDED
// DO NOT CHANGE OR DELETE ANY COMMENTS
// DO NOT MODIFY ANY FUNCTION'S NAME
// main() HAS ALREADY BEEN IMPLEMENTED BELOW FOR YOU
// FUNCTION PARAMETERS ARE PROVIDED.DO NOT scanf( ) THEM
// DO NOT printf( ) ANYTHING

int* findAltSort(int* arr, int arrLen){
// Sort elements of arr in ascending order and result alternative elements of resultant array
	// INSERT YOUR CODE BELOW

   int i,j,t;
   int *a = (int *) malloc(arrLen*sizeof(int));
   int *newArr = (int *) malloc(arrLen*sizeof(int));
      for(j=0;j<arrLen; j++)
        {
           a[j]=arr[j];
           //printf("\n a[%d]=%d",j,a[j]);
        }
   
   // a = arr;
   //Sorting in ascending order
   for(i=0;i<arrLen;i++)
   {
       for (j=0;j<arrLen;j++)
        {
           if(a[i]<a[j])
           {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
           }
       }
   }
   //printf("\n alt Array: \n");
   for(i=0,j=0; i<arrLen; i=i+2,j++)
    {
      newArr[j]= a[i];
    // printf("\n a[%d]=%d",j,newArr[j]);
        }
   return newArr;
}

int main(){
	// DO NOT CHANGE ANY CODE IN THIS FUNCTION
  
   int* result;
    int arrLen,j,len,x;
    
	printf("Enter the arrayLen:");
	scanf("%d",&arrLen);

    int *arr = (int *) malloc(arrLen*sizeof(int)); 
    printf("Enter the array values:");
    
    for(j=0; j<arrLen; j++)
    {
        scanf("%d",&x);   
        arr[j]=x;
    }
    
	result = findAltSort(arr, arrLen);
    //printf("\n Size of Result and int: %d, %d \n", sizeof(result),sizeof(int));
    if(arrLen%2==0)
     len = arrLen/2;
    else
     len = (arrLen/2) +1;
    //printf("\n Alt Sort Array:");
    j=0;
    //len = sizeof(result);
    
	while(j<len)
	{
     printf("\n%d",result[j++]);
    }
	return 0;
}
