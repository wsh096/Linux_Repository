#include <stdio.h>

int main(){
	int a = 3;
	int * pa = &a;
	int ** ppa;
	int *** pppa;
	printf("a = %d\n", a);
	printf("&a = %u\n", &a);
	printf("pa = %u\n", pa);
	* pa = 5;
	printf("* pa = %d\n", * pa);
	printf("changed a = %d\n", a);
	printf("&pa = %u\n", &pa);
	ppa = &pa;
	printf("ppa = %u\n", ppa);
	printf("*ppa = %u\n", *ppa);	
	printf("**ppa = %u\n", **ppa);
	printf("&ppa = %u\n", &ppa);
	printf("&*ppa = %u\n",&*ppa);
	printf("&**ppa = %u\n", &**ppa);
	pppa = &ppa;

	printf("pppa = %u\n", pppa);
	printf("*pppa = %u\n", *pppa);
	printf("**pppa = %u\n", **pppa);
	printf("***pppa = %u\n", ***pppa);
	printf("&pppa = %u\n", &pppa);
	printf("&*pppa = %u\n", &*pppa);
	printf("&**pppa = %u\n", &**pppa);
	printf("&***pppa = %u\n", &***pppa);
	return 0;
}
