/*结构体的使用*/

#include<stdio.h>
enum GENDER{male, famle};//enum 是类型，而#define 是简单的替换

typedef struct student{
	char name[20];
	char gender;
	int age;
	int id;
	int score;
}STUDENT,student_t;  //20+4*3=32B



int main()
{
	int a;


	
	//struct student s1;
	STUDENT s1 = {"duyuan",famle,22,52};
	student_t s2 = {.score = 99,.name = wangli};


//指定初始化

	printf("%d\n",sizeof(s1));
	int b = male;
	printf("%d\n",b);

	student_t * p;



	printf("%s, %d, %d, %d, %d\n",s1.name, s1.gender, s1.age, s1.id, s1.score );
	printf("gender :%s\n",s1.gender == 0?"male":"famle");

	printf("%s, %d, %d, %d, %d\n",s2.name, s2.gender, s2.age, s2.id, s2.score );


	printf("gender :%s\n",s2.gender == 0?"male":"famle");




	if(p == 0)
	{printf("NULL");}

	



	return 0;
}
