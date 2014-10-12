#include<stdio.h>



int main()
{

	long int n , k ;

	long int num ,i, j = 0 ;


	scanf("%ld",&k);

	scanf("%ld",&n);

	for(i=1;i<=k;i++)
	{
		scanf("%ld",&num);

		if((num % n)==0)
		{
			j = j + 1;

		}


	}	

	printf("%ld",j);



	return 0;

}
