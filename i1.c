#include<stdio.h>
#include<conio.h>
long long int rec2(int a);
long long int rec5(int a);
long long int call(int a);
void main()
{
    int n,num,i,k;
    long long int j[10],f,t;
    puts("Enter number of cases\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j[i]);
    }
    for(i=0;i<n;i++)
        {
            /*(for(k=1;k<=j[i];k++)
            {
                t=t*k;
            }*/
            t=call(j[i]);
            printf("%d\n",t);
        }
        getch();
}
long long int rec2(int a)
{
    long long int i=0;
    if(a<=1)
        return 0;
    while(a%2==0)
        i++;
    return i+rec2(a-1);
}
long long int rec5(int a)
{
    long long int i=0;
    if(a<=4)
        return 0;
    while(a%5==0)
        i++;
    return i+rec5(a-1);
}
long long int call(int a)
{
    long long int t,f;
    t=rec2(a);
    f=rec5(a);
    if(t<=f)
        return t;
    else
        return f;
}

