#include<stdio.h>
#include<conio.h>
void main()
{
int a[4][4];
int i,j,k,t1,t2,t3,b=0;
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    {
      scanf("%d",&a[i][j]);
    }
}
for(i=0;i<4;i++)
{
    t1=a[i][0];
    for(j=0;j<4;j++)
    {
       if(t1>=a[i][j])
       {
	   t1=a[i][j];
	   t2=j;
       }
    }
        t3=a[0][t2];
       for(k=0;k<4;k++)
       {
	   if(t3<=a[k][t2])
		t3=a[k][t2];
       }
       if(t3==t1)
       {
           printf("Saddle point is %d\n",t1);
           b=1;
       }
}
if(b==0)
    printf("Saddle point not found");
getch();
}
