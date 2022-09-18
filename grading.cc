#include <stdio.h>

int main()
{
	int i=0 ,num;
	while(i<6)
	{
		printf("enter the percentage of subject:\n");
		scanf("%d" ,&num);
		if(num>80)
		{
			printf("A\n");
		}
		else if(num>61&&num<80)
		{
			printf("B\n");
		}
		else if(num>51&&num<60) 
		{
			printf("C\n");
		}
		else if(num>41&&num<50)
		{
			printf("D\n");
		}
		else if (num>35&&num<40)
		{
			printf("E\n");
		}
		else if (num<35)
		{
			printf("F\n");
		}
		i=i+1;
    }
    return 0;
}