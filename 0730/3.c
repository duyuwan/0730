typedef struct empoyee{
	char name[21];
	int id;
	char *depart;
	int wage;
}worker;

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	worker w[3];
	int size = sizeof(w[1]);
	printf("size = %d\n",size);

	for(i = 0; i < 3; i++)
	{
	w[i].depart = (char *)malloc(20);
	scanf("%s %s %d %d",w[i].name, w[i].depart, &(w[i].id), &w[i].wage);
	}


	for(i = 0; i< 3; i++)
	{
	printf("%s, %s, %d, %d\n",w[i].name, w[i].depart, w[i].id, w[i].wage);
	free(w[i].pepart);
	}
	
	return 0;

}
