#include<stdio.h>

int main()
{
	int a[][3] = {1,2,3,4,5,6};
	printf("sizeof(a) = %d ,sizeof(a[0]) = %d, sizeof(a[0][0]) = %d\n",sizeof(a),sizeof(a[0]),sizeof(a[0][0]));


	return 0;
}
