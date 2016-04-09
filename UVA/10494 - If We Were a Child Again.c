#include <stdio.h>
#include <string.h>
char a[100000],b[100000];

int main()
{
    char sign;
    long long int n,d1,i,j,len,rem,div;
    while(scanf("%s %c %lld",a,&sign,&n)==3)
    {
        len = strlen(a);
        d1 = 0;
        div = 0;
        rem = 0;
        if(sign == '%')
        {
            for(i=0; i<len; i++)
            {
                d1 = (d1*10+a[i]-'0')%n;
            }
            printf("%lld\n", d1);
        }
        else
        {
            for(i=0; i<len; i++)
            {
                rem = (rem * 10 + a[i] - '0')%n;
                div = (div * 10 + a[i] - '0')/n;
                b[i] = div+'0';
                div = rem;
            }
            for(i=0; i<len; i++)
            {
                if(b[i]!='0')
                    break;
            }
            j = i;
            if(j==len)
                printf("0");
            else
                for(i=j; i<len; i++)
                {
                    printf("%c",b[i]);
                }
            printf("\n");
        }
        memset(b,'\0',sizeof(b));
    }
    return 0;
}
