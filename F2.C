#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int a[10],i=0,c=0;
char k[10]="29.txt";
FILE *fp;
clrscr();
while(1)//k[0]!='\0')
{
//k="29.txt";
fp=fopen(k,"r");
n=getc(fp);
while(n!=EOF)
{
putchar(n);
if(n>=48&&n<=57)
{
k[i]=n;
i++;
}
n=getc(fp);
}
k[i]='.';
k[i+1]='t';
k[i+2]='x';
k[i+3]='t';
k[i+4]='\0';
printf("\n");
puts(k);

c++;

if(c==4)
break;
//if(k[27]>47&&k[27]<59)
//k[0]='\0';
}
//fclose(fp);
//fopen("");
}