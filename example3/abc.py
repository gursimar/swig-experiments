import example

size = 10;
array = example.intArray(size)
for i in xrange(size):
	array[i] = i;

hello = example.arraySum(array,size)
print hello