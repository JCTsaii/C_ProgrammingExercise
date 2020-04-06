#include<stdio.h>
double Min(double x, double y);
double MinPtr(double *a, double *b);
int main(void)
{
	double x=15.5, y=18.888;
	
	printf("%f\n",Min(x,y));
	printf("%f\n",MinPtr(&x,&y));	
	return 0;
}
double Min(double x, double y)
{
	double min;
	min=x;
	if (y<min)
	{
		min=y;
	}
	return min;
}
double MinPtr(double *a, double *b)
{
	if (*a<*b)
	{
		*b=*a;
	}
	return *b;
}
