#include<stdio.h>
void main()
{
int a;
FILE *ptr;
if(ptr=fopen("90052.txt","r")==NULL)
{
printf("File could not be opened");
}
else
{
fscanf(ptr,"%d",&a);
printf("%d",a);
}
}