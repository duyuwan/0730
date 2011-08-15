#include<stdio.h>

enum weekday{mon = 1,tue, wed, thu, fri, sat, sun};



int main()
{	
	int day;
	printf("enter the day:(1--7)");
	scanf("%d",&day);

	switch(day){
		case mon:printf("Today is mon.\n");break;
		case tue:printf("Today is tue.\n");break;
		case wed:printf("Today is wed.\n");break;
		case thu:printf("Today is thu.\n");break;
		case fri:printf("Today is fri.\n");break;
		case sat:printf("Today is sat.\n");break;
		case sun:printf("Today is sun.\n");break;
		default:printf("error number!\n");break;	
	}	


	return 0;
}
