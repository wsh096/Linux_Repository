#include <stdio.h>
int main(){
	int a;
	printf("int size is %d\n",sizeof(a));
	int * pa;
	long b;
	char c;
	short s;
	float f;
	float * pf;
	printf("int pointer size is %d\n",sizeof(pa));
	printf("long size is %d\n",sizeof(b));
	printf("character size is %d\n",sizeof(c));
	printf("short size is %d\n",sizeof(s));
	printf("float size is %d\n",sizeof(f));
	printf("float pointer size is %d\n",sizeof(pf));
	return 0;
}
