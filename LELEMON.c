/*Problem Statement:
Little Elephant likes lemonade.
When Little Elephant visits any room, he finds the bottle of the lemonade in that room that contains
the greatest number of litres of lemonade and drinks it all.
There are n rooms (numbered from 0 to n-1), each contains Ci bottles.
Each bottle has a volume (in litres).
The first room visited by Little Elephant was P0-th, the second - P1-th, ..., the m-th - Pm-1-th room.
Note that Little Elephant may visit a room more than once.
Find for Little Elephant the total volume of lemonade he has drunk.

Input:
First line of the input contains single integer T - the number of test cases.
T test cases follow. First line of each test case contains pair of integers n and m.
Second line contains m integers separated by a single space - array P.
Next n lines describe bottles in each room in such format: Ci V0 V1 ... VCi-1,
where V is the list of volumes (in liters) of all bottles in i-th room.*/
#include<stdio.h>
int main()
{
    unsigned int t,n,c[100],p[10000],m,i,j,k,l,sum[10]={0},a,b=0,d;
    unsigned long v[100][100];
    scanf("%u",&t);
    if(t>0 && t<=10)
    {
        for(i=0;i<t;i++)
        {
            scanf("%u%u",&n,&m);
            for(j=0;j<m;j++)
            {
                scanf("%u",&p[j]);
            }
            for(k=0;k<n;k++)
            {
                scanf("%u",&c[k]);
                for(l=0;l<c[k];l++)
                {
                    scanf("%lu",&v[k][l]);
                }
            }
            for(j=0;j<m;j++)
            {
                a=v[p[j]][0];
                for(k=0;k<c[p[j]];k++)
                {
                    if(a<=v[p[j]][k])
                    {
                        a=v[p[j]][k];
                        d=k;
                    }
                }
                v[p[j]][d]=0;
                sum[b]=sum[b]+a;
            }
            b++;
        }
    }
    for(j=0;j<b;j++)
    {
        printf("%d\n",sum[j]);
    }
    return 0;
}
