#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
scanf("%d%d",&a,&b);
for(c=1;c<=b;c++)
{
for(e=b-c;e>0;e--)
{
printf(" ");
}
for(d=1;d<c+1;d++)
{
   printf("%c",(a+97));
}
a++;
printf("\n");
}
getch();
}