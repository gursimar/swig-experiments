%module example

%include "carrays.i"
%array_class(int, intArray);

extern int arraySum(int *array, int n);
