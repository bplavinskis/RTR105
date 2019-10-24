#include<stdio.h>
#include<math.h>

int  main()
{
	int i, n=50;

	for(i=1;i<=n;i++)
	{
		printf("(1+1/%d)^%d\n = %.5f\n",i,i,pow( 1+1./i , i ));
	}
	return 10;
}
