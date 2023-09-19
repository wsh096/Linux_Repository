#include <stdio.h>

int main(){
	int array[5];
	array[3] = 0x55;
	*(array) = 0x00;
	*(array + 1) = 0x11;
	*(array + 2) = 0x22;
	*(array + 4) = 0x33;
	printf("array[0] size is %d\n", sizeof(*array));
	int * pa;
	printf("a int pointer size is %d\n", sizeof(pa));

	char chars[5];

	chars[3] = 0x44;
	*(chars + 1) = 0x99;
	*(chars + 2) = 0x98;
	*(chars + 3) = 0x97;
	printf("chars[0] size is %d\n", sizeof(*chars));

	char * pc;
	printf("a char pointer size is %d\n", sizeof(pc));

	double doubles[5];

	*doubles = 0x12;
	*(doubles + 1) = 0x13;
	*(doubles + 2) = 0x14;
	printf("chars[0] size is %d\n", sizeof(*chars));

	double * pd;
	printf("a double pointer size is %d\n", sizeof(pd));

	return 0;
}
/*
 * use g++ -g -o <want to file name>.out(something extentions, my .gitignore) <target file.cpp>
nextstep apt install gdb
nextstep use gdb command
gdb <filename>.your something .gitignore extentions
gdb disas main
below code u meet.

이점이라고 생각되는 건 pointer의 경우 8바이트 고정인데 배열로 만들면 크기를
개별 type으로 만들 수 있다는 점이 메리트
 *Dump of assembler code for function main():
   0x0000000000001149 <+0>:     endbr64
   0x000000000000114d <+4>:     push   %rbp
   0x000000000000114e <+5>:     mov    %rsp,%rbp
   0x0000000000001151 <+8>:     sub    $0x60,%rsp
   0x0000000000001155 <+12>:    mov    %fs:0x28,%rax
   0x000000000000115e <+21>:    mov    %rax,-0x8(%rbp)
   0x0000000000001162 <+25>:    xor    %eax,%eax
   0x0000000000001164 <+27>:    movl   $0x55,-0x54(%rbp)
   0x000000000000116b <+34>:    movl   $0x0,-0x60(%rbp)
   0x0000000000001172 <+41>:    movl   $0x11,-0x5c(%rbp)
   0x0000000000001179 <+48>:    movl   $0x22,-0x58(%rbp)
   0x0000000000001180 <+55>:    movl   $0x33,-0x50(%rbp)
   0x0000000000001187 <+62>:    movb   $0x44,-0xa(%rbp)
   0x000000000000118b <+66>:    movb   $0x99,-0xc(%rbp)
   0x000000000000118f <+70>:    movb   $0x98,-0xb(%rbp)
   0x0000000000001193 <+74>:    movb   $0x97,-0xa(%rbp)
   0x0000000000001197 <+78>:    movsd  0xe69(%rip),%xmm0        # 0x2008
   0x000000000000119f <+86>:    movsd  %xmm0,-0x40(%rbp)
   0x00000000000011a4 <+91>:    movsd  0xe64(%rip),%xmm0        # 0x2010
   0x00000000000011ac <+99>:    movsd  %xmm0,-0x38(%rbp)
   0x00000000000011b1 <+104>:   movsd  0xe5f(%rip),%xmm0        # 0x2018
   0x00000000000011b9 <+112>:   movsd  %xmm0,-0x30(%rbp)
   0x00000000000011be <+117>:   mov    $0x0,%eax
   0x00000000000011c3 <+122>:   mov    -0x8(%rbp),%rdx
   0x00000000000011c7 <+126>:   xor    %fs:0x28,%rdx
   0x00000000000011d0 <+135>:   je     0x11d7 <main()+142>
   0x00000000000011d2 <+137>:   callq  0x1050 <__stack_chk_fail@plt>
   0x00000000000011d7 <+142>:   leaveq
   0x00000000000011d8 <+143>:   retq
 *
 */
