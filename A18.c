#include<stdio.h>
#include<conio.h>
#include<string.h>
void palin(char *a,int l,int i);
void main()
{
    char a[15],b[15];
    int i=0,j=0;
    puts("Enter a string");
    fflush(stdin);
    gets(a);
    while(a[i++]!='\0')
    {
        b[i-1]=tolower(a[i-1]);
    }
    b[i-1]='\0';
    strcpy(a,b);
    palin(b,i-1,j);
    if(strcmp(a,b))
        puts("Not Palindrome");
    else
        puts("Palindrome");
    getch();
}
 void palin(char *a,int l,int i)
 {
     char temp;
     if(i==l/2)
        return;
     else
     {
         temp=*(a+i);
         *(a+i)=*(a+l-1-i);
         *(a+l-1-i)=temp;
         palin(a,l,i+1);
     }
 }
