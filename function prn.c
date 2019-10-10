#include <stdio.h>
#include <stdlib.h>
long long int getprn(int* a[])
{
	printf("Enter PRN");
	int i;
	for(i=0;i<6;i++)
	{
	scanf("%lld",&a[i]);
	printf("%lld",a[i]);		
	}
	return a;
}

main()
{
	int a[6];
	getprn(&a[6]);
	printf("%lld",*a);
}
