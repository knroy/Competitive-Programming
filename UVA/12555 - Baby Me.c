#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t,i,j,len;
    float n1,n2,total;
    char a[101];
    scanf("%d", &t);
    getchar();
    for(j=1; j<=t; j++)
    {
        n1=0,n2=0;
        gets(a);
        len = strlen(a);
        for(i=0; i<len; i++)
        {
            if(a[i]>='0' && a[i]<='9')
                a[i] = a[i];
            else
                a[i] = ' ';
        }
        a[i]='\0';
        sscanf(a,"%f %f",&n1,&n2);
        total = n1 * 0.5 + n2 * 0.05;
        printf("Case %d: %g\n",j,total);
    }
    return 0;
}
