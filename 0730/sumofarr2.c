#include<stdio.h>


int sum(int a[][3], int hang, int lie)
{

	int i, j;
	int s = 0;
	for(i = 0; i < hang; i++)
		for(j = 0; j < lie; j++)
		{
		s = s + a[i][j];
		}


	return s;
}

int main()
{
	int a[][3] = {2,3,2,4,3,6};

	int hang = sizeof(a)/sizeof(a[0]);
	int lie = 3;
	printf("%d\n%d\n",hang, lie );
	


	printf("sum = %d\n",sum(a,hang, lie));

	

	return 0;
}
