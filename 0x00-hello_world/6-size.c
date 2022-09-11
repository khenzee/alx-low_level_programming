#include<stdio.h>
/**
 * main - you should produce the exact same output as in the example
 * Description: Write a C program that prints the size of various
 * types on the computer it is compiled and run on
 * Return : 0
 */
int main(void) {
	printf("Size of char: %i byte\n",sizeof(char));
	printf("Size of int: %i byte\n",sizeof(int));
	printf("Size of long int: %i byte\n",sizeof(long int));
	printf("Size of long long int: %i byte\n",sizeof(long long int));
	printf("Size of float: %i byte\n",sizeof(float));
	return (0);
}
