#include<stdio.h>
#include<stdlib.h>

int main()
{
	int b;
	float l;
	printf("Your bonus this month:");
	scanf("%d",&b);
	
	if (b <= 100000)
			l = b * 0.1;
	else if (b>100000 && b<=200000)
			l = 10000+(b-100000)*0.075;
	else if (b>200000 && b<=400000)
			l = 17500+(b-200000)*0.05;
	else if (b>400000 && b<=600000)
			l = 27500+(b-400000)*0.03;
	else if (b>600000 && b<=1000000)
			l = 33500+(b-600000)*0.015;
	else 
			l = 39500+(b-1000000)*0.01;
		

	
	printf("Total bonuses should be issued = %2f\n",l);
	system("pause");
	return 0;
}
