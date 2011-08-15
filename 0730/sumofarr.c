#include<stdio.h>
int sum(int a[],int n)
{
	int sum = 0;
	int i;
	for(i = 0; i < n; i++)
	sum = sum + a[i];
	
	return sum;

}


int main()
{	int a[] = {1,2,3,4,5,6,7,88,9,34};

	int length = sizeof(a)/sizeof(a[0]);

	printf("sum = %d\n",sum(a,length));

	return 0;
}
