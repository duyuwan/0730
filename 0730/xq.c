/*用枚举和switch实现输入一个（1——7）的数字，打印相应的“今天是星期几”的字符串，中英文均可。*/

#include<stdio.h>

int main()
{
enum XQ{monday = 1,tuesday,wednesday,thursday,friday,saturday,sunday}xq1;
//使用枚举类型就是为了使代码看起来意义清晰易懂，各种变量的含义清晰起来。

	printf("enter your xingqi number:");
	scanf("%d",&xq1);
	
	switch(xq1){
		case monday:printf("今天是：monday.\n");break;
		case tuesday:printf("今天是：tuesday.\n");break;
		case wednesday:printf("今天是：wednesday.\n");break;
		case thursday:printf("今天是：thursday.\n");break;
		case friday:printf("今天是：friday.\n");break;
		case saturday:printf("今天是：saturday.\n");break;
		case sunday:printf("今天是：sunday.\n");break;
		default:printf("error!");break;

		}


	return 0;
}
