#include<stdio.h>
#include<string.h>

int main()
{
    char num[1000000];
    int len,i,n,a,k;
    while(scanf("%s", num)==1)
    {
        if(num[0]=='0')
        {
            break;
        }
        else
        {
            n = 0,a = 0;
            len = strlen(num);
            for(i=0; i<len; i++)
            {
                a = a + (num[i]-'0');
            }
            k = a%9;
            if(k==0)
            {
                printf("9\n");
            }
            else if (a>=10 && k!=9)
            {
                n = a - 9 * (a/9);
                printf("%d\n", n);
                n = 0;
            }
            else
            {
                printf("%d\n", a);
                a = 0;
            }
        }
    }
    return 0;
}
