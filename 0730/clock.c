/* 用结构体的知识，实现在屏幕上模拟一个数字时钟，不必取当前真实时间，只需模拟出：
  a. 每当满60秒，分钟数增加1，秒数归零。
  b. 每当满60分钟，小时数加1，分钟数归零。
  c. 每当小时数增加24，归零。*/

#include<stdio.h>
#include<stdlib.h>
struct time{
	int hour;
	int minute;
	int second;
};

int main()
{
	struct time timer = {0,0,0};	
	
	while(timer.hour != 24){


	timer.second++;
	if(timer.minute == 60)
	{
	timer.hour++;
	timer.minute = 0;
	}
	if(timer.second == 60)
	{
	timer.minute++;
	timer.second = 0;
	}		
	if(timer.hour == 24)
	{
	timer.hour = 0;
	}
	
	system("clear");

	printf("%02d:%02d:%02d\n",timer.hour, timer.minute, timer.second);
	sleep(1);

	}
	return 0;

}

