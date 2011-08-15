//定义一个雇员结构体，然后定义一个结构体数组，含有十个雇员


#include<stdio.h>

struct employee{
	char name[20];	
	char depart[20];
	int id;
	int wage;
};

#include<stdio.h>
int  main()
{

	int i;
	struct employee s[10];


	printf("enter s[10]:");

	for(i = 0; i < 10;  i++)
	{
	scanf("%s %s %d  %d",s[i].name, s[i].depart, &s[i].id, &s[i].wage);
	}

	for(i = 0; i < 10; i++)
	{
	printf("s[%d]:%20s %20s  %10d  %10d\n",i, s[i].name, s[i].depart, s[i].id, s[i].wage);
	}
	

	return 0;
}
