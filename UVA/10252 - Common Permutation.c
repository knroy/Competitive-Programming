#include <stdio.h>
#include <string.h>
#define max 1100

int main()
{
    char a[max],b[max],c[max],s;
    int len1,len2,i,j,l,k;
    while(gets(a) && gets(b))
    {
        len1 = strlen(a);
        len2 = strlen(b);
        l = 0,k=0;
        for (i = 0 ; i<len1-1; i++)
        {
            for (j = 0 ; j < len1-i- 1; j++)
            {
                if (a[j] > a[j+1])
                {
                    s = a[j];
                    a[j] = a[j+1];
                    a[j+1]= s;
                }
            }
        }
        for (i = 0 ; i<len2-1; i++)
        {
            for (j = 0 ; j < len2 - i - 1; j++)
            {
                if (b[j] > b[j+1])
                {
                    s = b[j];
                    b[j] = b[j+1];
                    b[j+1]= s;
                }
            }
        }
        for(i=0; i<len1; i++)
        {
            for(j=l; j<len2; j++)
            {
                if(a[i]==b[j])
                {
                    c[k] = a[i];
                    l = j+1;
                    k++;
                    break;
                }
            }
        }
        for(i=0; i<k; i++)
        {
            if(c[i]>='a' && c[i]<='z')
                printf("%c",c[i]);
        }
        printf("\n");
        memset(c,'\0',sizeof(c));
    }
    return 0;
}
