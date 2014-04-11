#include<stdio.h>
#include<conio.h>
void main()
{
unsigned long long int a=600851475143;
int b,c;
//printf("Enter a number\n");
//scanf("%llu",&a);
for(b=2;b<=a;b++)
{while(a%b==0)
{
c=b;
a=a/b;
}
}
printf("%d",c);
getch();
}
