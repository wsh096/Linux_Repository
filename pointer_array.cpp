#include <stdio.h>
//my curious is array also use pointer and how many size real 8 byte or 4byte check below
int main(){
	
	int array[5];
	printf("array total size is %ld\n",sizeof(array));
	
	int *parray[5];
	printf("pointer array totatl size is %ld\n", sizeof(parray));
	printf("once pointer array size is %ld\n", sizeof(parray + 1));
	return 0;
}
