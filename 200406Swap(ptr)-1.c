/*
1. &+VariableName--> the address of that value
2. *+PointerName or Address--> the value stored at that address
*/
#include<stdio.h>
void swap2(int* a, int* b);
int main(void)
{
	int x=3,y=5;
	printf("Before: x=%d, y=%d\n", x, y);
	swap2(&x,&y);
	printf("After: x=%d, y=%d\n", x, y);
	return 0;
}
void swap2(int* a, int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}
