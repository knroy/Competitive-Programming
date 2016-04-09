#include <stdio.h>
#include <string.h>

int len1,len2,len3,i,j;

void perfect(char c[])
{
    int real = 0;
    len3 = strlen(c);
    for(i=0; i<len3; i++)
    {
        if(c[i]!='0')
            real++;
        if(real!=0)
            printf("%c",c[i]);
    }
    c[i]='\0';
}

int maxx()
{
    if(len1>len2)
        return len1;
    else
        return len2;
}

int main()
{
    int n,len,sum,extra,l;
    char a[300],b[300],c[300];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        scanf("%s %s",a,b);
        len1 = strlen(a);
        len2 = strlen(b);
        len = maxx()-1;
        i = 0;
        j = 0;
        l = 0;
        sum = 0;
        extra = 0;
        while(1)
        {
            if(i>len1-1)
                a[i] = '0';
            if(j>len2-1)
                b[j] = '0';
            sum = (a[i++]-'0')+(b[j++]-'0')+extra;
            if(sum>=10)
            {
                sum = sum - 10;
                extra = 1;
            }
            else
                extra = 0;
            c[l++] = sum + '0';
            if(l>len && extra == 0)
                break;
        }
        c[l] = '\0';
        perfect(c);
        memset(c,'\0',sizeof(c));
        printf("\n");
    }
    return 0;
}
