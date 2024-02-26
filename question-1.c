//Q.1 Write a Program to find the length of a string using a Pointer.
#include<stdio.h>
void main()
{
	char a[100],*p;
	printf("enter string =");
	gets(a);
	p=&a;
	strlen(a);
	printf("length of string is %d ",strlen(a));
	
	
}