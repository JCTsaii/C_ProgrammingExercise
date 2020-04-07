/* 
1. Adding 1 to a pointer means add a storage unit
2. For array, the address is increased to the address of the next storage.
3. That's why we need to declare the type of object to which the pointer points. 
4. ar[n]-->*(ar+n)
5. same address: date+2=&date[2] (short)
6. same value: *(date+2)=date[2] (short)
*/
#include<stdio.h>
#define SIZE 10
int main(void)
{
	int* ptr;
	printf("Size of a ptr to int is %d\n", sizeof(ptr));
	int test[SIZE]={2,4,6,8,1,3,5,6,7,8};
	printf("%d\n", sum(test,SIZE));
	printf("Size of test is %d\n", sizeof(test));
	printf("Size of element(test1) is %d\n", sizeof(test[1]));
	printf("%d\n", sump(test,test+SIZE-1));
	return 0;
	
}
int sum(int ar[], int n)
{
	int sum=0;
	int i=0;
	for (i=0;i<n;i++)
	{
		sum=sum+ar[i];
	}
	printf("In sum size of ar is %d\n", sizeof(ar));
	return sum;
}
int sump(int* str, int* end)
{
	int sump=0;
	while (str<=end)
	{
		sump=sump+*str;
		str++;
	}
	return sump;
}
