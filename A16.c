#include<stdio.h>
#include<conio.h>
int isSymmetric(int a[4][4],int n);
void main()
{
int a[4][4];
int i,j,k;
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    {
      scanf("%d",&a[i][j]);
    }
}
    k=isSymmetric(a,4);
    printf("%4d",k);
    getch();
}
int isSymmetric(int a[4][4],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
{
    for(j=0;j<=i;j++)
    {
       if(a[i][j]!=a[j][i])
       {
	   k=1;
	   break;
       }
    }
}
if(k==1)
    return 0;
else
    return 1;
}
