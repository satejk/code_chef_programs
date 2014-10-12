#include<stdio.h>


int main()
{
	int num;
	float bal;
	

	scanf("%d",&num);
	scanf("%f",&bal);
	
	if(num > (bal-0.5) || num % 5 != 0 )
	{
		printf("%.2f",bal);
	}
	else
	{
		

		 

		printf("%.2f",(bal - num - 0.5));

	}


	return 0 ;
}
