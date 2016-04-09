#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    int n,total=0,i,j,t,len,num,mod;
    scanf("%d", &t);
    getchar();
    for(j=1; j<=t; j++)
    {
        gets(a);
        len = strlen(a);
        for(i=0; i<len; i++)
        {
            if(a[i]==' ')
            {
                total++;;
            }
            else if(a[i]>='p' && a[i]<='s')
            {
                num = a[i]%111;
                mod = num%4;
                if(mod==0)
                {
                    total+=4;
                }
                else
                {
                    total+=mod;
                }
            }
            else if(a[i]>='w' && a[i]<='z')
            {
                num = a[i]%118;
                mod = num%4;
                if(mod==0)
                {
                    total+=4;
                }
                else
                {
                    total+=mod;
                }

            }
            else if(a[i]>='t' && a[i]<='v')
            {
                num = a[i]%115;
                mod = num%3;
                if(mod==0)
                {
                    total+=3;
                }
                else
                {
                    total+=mod;
                }
            }
            else
            {
                num = a[i]%96;
                mod = num%3;
                if(mod==0)
                {
                    total+=3;
                }
                else
                {
                    total+=mod;
                }
            }
            a[i]='\0';
        }
        printf("Case #%d: %d\n", j,total);
        total = 0;
    }
    return 0;
}
