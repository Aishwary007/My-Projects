#include<stdio.h>
#include<conio.h>
void main()
{
char a[500]="g fmnc wms bgblr rpylqjyrc gr zw fylb. rfyrq ufyr amknsrcpq ypc dmp. bmgle gr gl zw fylb gq glcddgagclr ylb rfyr'q ufw rfgq rcvr gq qm jmle. sqgle qrpgle.kyicrpylq() gq pcamkkclbcb. lmu ynnjw ml rfc spj.";
int i=0,j=0;
//gets(a);
while(a[i++]!='\0')
j++;
for(i=0;i<j;i++)
{
    if(a[i]==32||a[i]==46)
    continue;
    else if(a[i]==121)
        a[i]=97;
    else if(a[i]==122)
        a[i]=98;
    else
    {
        a[i]=a[i]+2;
    }
}

puts(a);
getch();
}
