// Minh Nguyen

#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[])
{
	int *values;
	int i;
	
	values = (int *)malloc(sizeof(int) * 5);
	
	for(i = 0; i < 5; i++)
	{
		values[i] = i;
	}
	
	printf("1. argc address: %p\n", &argc);
	printf("2. Stack veriables: values address: %p\n", &values);
	printf("			i address: %p\n", &i);
	printf("3. Heap veriables: %p\n", values);
	printf("4. uninitialized data: %p\n", &x);
	printf("5. initialized data: %p\n", &y);
	return EXIT_SUCCESS;
}
