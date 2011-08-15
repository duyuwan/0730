
#include<stdio.h>
struct clock{
	int hour;
	int minute;
	int second;
};



//定义函数修改时间。
void update(struct clock *aclock)
{
	aclock->second++;

	if(aclock->second == 60)
	{aclock->minute++;
	aclock->second = 0;
	}

	if(aclock->minute == 60)
	{aclock->hour++;
	aclock->minute = 0;
	}

	if(aclock->hour == 24)
	{
	aclock->hour == 0;
	}
}



int main()
{
	struct clock myclock = {0};
	
	while(1)
	{
	sleep(1);
	update(&myclock);
	printf("%02d:%02d:%02d \r",myclock.hour, myclock.minute, myclock.second);	

	fflush(stdout);
	}

	return 0;



}
