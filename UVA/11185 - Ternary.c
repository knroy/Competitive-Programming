#include <stdio.h>

int main()
{
    long long int a,c;
    long long int i,count=0;
    long long int bol[10000];
    while(scanf("%lld", &a)==1)
    {
        if(a<=-1)
            break;
        else
        {
            i = 0,count=0;
            c = a;
            while(a!=0)
            {
                bol[i] = a%3;
                a = a / 3;
                count++;
                i++;
            }
            if(c==0)
            {
                printf("0");
            }
            else
            {
                for(i=count-1; i>=0; i--)
                {
                    printf("%lld", bol[i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
