#include <stdio.h>
#include <string.h>

int main()
{
    char a[10000],b[1000][1000];
    int i,j,m,n,len,n_s,n_l;
    while(gets(a))
    {
        j = 0;
        len = strlen(a);
        for(i=0; i<len; i++)
        {
            if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z' || a[i]==' ')
            {
                a[i]=a[i];
            }
            else if(a[i]=='.')
            {
                a[i]=' ';
            }
        }
        for(m=0; m<len; m++)
        {
            if(a[m]!=' ')
                break;
        }
        n_s = m;
        //printf("%d\n", m);
        for(n=len-1; n>=0; n--)
        {
            if(a[n]!=' ')
                break;
        }
        n_l = n;
        j = 0;
        for(i=n_s; i<n_l; i++)
        {
            if(a[i]!=' ')
            {
                b[j][i] = a[i];
                //printf("b[%d][%d]=%c\n",j,i,b[j][i]);
            }
            else if(a[i]==' ' && a[i+1]!=' ')
            {
                j++;
            }
            else
            {
                j=j;
            }
        }
        printf("%d\n", j+1);
    }
    return 0;
}

