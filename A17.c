#include<stdio.h>
#include<conio.h>
void remspace(char a[50],char b[50]);
void main()
{
    char a[50],b[50];
    puts("Enter a string");
    gets(a);
    remspace(a,b);
    puts(b);
    getch();
}
void remspace(char a[50],char b[50])
{
    int i=0,j=0;
    puts("You Entered");
    puts(a);
    while(a[i]==32)
    {
        i++;
    }
    while(a[i]!='\0')
    {
        b[j]=a[i];
        i++;
        j++;
    }
b[j]='\0';
}
