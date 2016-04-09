#include <stdio.h>
#include <string.h>

int main()
{
    int i,len,k,j,c;
    char n,a[10000],b[10000];
    while(scanf("%d", &n)== 1)
    {
        getchar();
        scanf("%s",a);
        if(n==0 && a[0]=='0' && a[1]=='\0')
            break;
        len = strlen(a);
        k = 0;
        for(i=0; i<len; i++)
        {
            if(a[i]== n+'0')
            {
                a[i]=' ';
            }
        }
        c = 0;
        for(i=0; i<len; i++)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                c = c * 10 + (a[i]-'0');
                if(c>0)
                    break;
            }
        }
        j = 0;
        for(i=0; i<len; i++)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                b[j] = a[i];
                j++;
            }
        }
        i = 0;
        while(i<=j)
        {
            if(b[i]=='0')
            {
                b[i]=' ';
            }
            else
                break;
            i++;
        }
        if(c==0)
        {
            printf("%d", c);
        }
        else
        {
            for(i=0; i<=j; i++)
            {
                if(b[i]>='0' && b[i]<='9')
                {
                    printf("%c", b[i]);
                }
            }
        }
        printf("\n");
        memset(a, ' ', 10000);
        memset(b, ' ', 10000);
    }
    return 0;
}
