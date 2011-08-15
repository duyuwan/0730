#include<stdio.h>
#include<string.h>
int main()
{
	char *str = "I am duyuwan";
	int i = 0;
	int len = strlen(str);


for(i=0; i < len; i++)
    {
       printf("%c", *str);
       str++;
    }

	printf("\n");
	return 0;

}
