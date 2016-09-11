int arraySum(int *array, int n) {
	int sum = 0;
	int i;
	for (i=0; i<n; i++) {
		sum = sum + array[i];
	}
	
	return sum;
}


