/*
1. To communicationg the result to main() is the problem.
2. Changing a,b doesn't effect x,y.
3. Only 1 value can be sent back by "return".

*/

#include <stdio.h>
void swap1(int a, int b);
int main(void)
{
	int x=3,y=5;
	printf("Before: x=%d, y=%d\n", x, y);
	swap1(x,y);
	printf("After: x=%d, y=%d\n", x, y);
	return 0;
 } 
void swap1(int a, int b)
{
	int temp;
	printf("Before (in function): a=%d, b=%d\n", a, b);
	temp=a;
	a=b;
	b=temp;
	printf("After (in function): a=%d, b=%d\n", a, b);
}
