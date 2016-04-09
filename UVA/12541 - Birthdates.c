#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    long long int t,m,d,y,len[150],i,j,big,small,all[150],x,z;
    char a[150],b[20],c[150][20];
    while(scanf("%lld", &t)==1)
    {
        getchar();
        x=0,z=0;
        for(i=0; i<t; i++)
        {
            gets(a);
            sscanf(a,"%s %lld %lld %lld",b,&d,&m,&y);
            len[i] = strlen(b);
            for(j=0; j<len[i]; j++)
            {
                c[i][j] = b[j];
            }
            c[i][j] ='\0';
            b[j]='\0';
            all[i] = d + m * 30 + y*365;
        }
        small = 0;
        for(i=0; i<t; i++)
        {
            if(all[i]>small)
            {
                x = i;
                small = all[i];
            }
        }
        big = small;
        for(i=0; i<t; i++)
        {
            if(all[i]<big)
            {
                z = i;
                big = all[i];
            }
        }
        for(j = 0; j<len[x]; j++)
            printf("%c",c[x][j]);
        c[x][j] = '\0';
        printf("\n");
        for(j = 0; j<len[z]; j++)
            printf("%c",c[z][j]);
        c[z][j] = '\0';
        printf("\n");
    }
    return 0;
}

