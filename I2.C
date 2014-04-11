#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int i,j,k,a;
	long int b[10],sum;
	puts("Enter no. of test case\n");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%ld",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		sum=0;
		while(pow(5,k+1)<=b[i])
			k++;
		for(j=1;j<=k;j++)
		{
			sum=sum+(b[i]/(pow(5,j)));
		}
		printf("%ld\n",sum);

	}
	return 0;
}
