#include<stdio.h>
#include<stdlib.h>

int main()
{
	int b1,b,tb;
	printf("Your bonus this month:");
	scanf("%d",&b1);
	
	if (b1 > 1000000)
			b = b1 * 1 / 100;
	else if (b1>600000 && b1<=1000000)
			b = b1 * 3 / 200;
	else if (b1>400000 && b1<=600000)
			b = b1 * 3/ 100;
	else if (b1>200000 && b1<=400000)
			b = b1 * 5/ 100;
	else if (b1>100000 && b1<=200000)
			b = b1 * 15 / 200;
	else if (b1 <= 100000)
			b = b1 * 10 / 100;
		
	tb = b1 + b;
	
	printf("Total bonuses should be issued = %d\n",tb);
	system("pause");
	return 0;
}
