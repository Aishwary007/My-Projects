#include<stdio.h>
#include<conio.h>

int gcd(int a,int b,int c,int i);

void main()
{
    int a,b,c=1,i=2,d;
    // clrscr();
    scanf("%d%d",&a,&b);
    if(a<b)
        d=gcd(a,b,c,i);
    else
        d=gcd(b,a,c,i);
    printf("%d",d);
    getch();
}

  int gcd(int a,int b,int c,int i)
{


	if(i>a)
	return c;
   // else
//	{
	    while(a%i==0&&b%i==0)
	{
	    c=c*i;
	    a=a/i;
	    b=b/i;
	}
	gcd(a,b,c,i+1);
	//}

}`
