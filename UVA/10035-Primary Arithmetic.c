#include<stdio.h>
#include<string.h>

int main()
{
    char a[101],b[101],sum[105];
    int i,j,sz,sz1;
    int carry[100];
    int x,car;
    while(scanf("%s %s", a,b)==2)
    {
        sz = strlen(a);
        sz1 = strlen(b);
        if((sz == 1 && a[0] =='0') && (sz1==1 && b[0] == '0'))
        {
            break;
        }
        else if(sz>=sz1)
        {
            for(i=0; i<=sz-sz1-1; i++)
            {
                sum[i] = '0';
            }
            i = 0;
            for(j=sz-sz1; j<=sz; j++)
            {
                sum[j] = b[i];
                i++;
            }
            sum[j]='\0';
        }
        else if(sz1>sz)
        {
            for(i=0; i<=sz1-sz-1; i++)
            {
                sum[i] = '0';
            }
            i = 0;
            for(j=sz1-sz; j<=sz1; j++)
            {
                sum[j] = a[i];
                i++;
            }
            sum[j]='\0';
        }
        x = 0, car = 0;
        if(sz>=sz1)
        {
            for(i=sz-1; i>=0; i--)
            {
                carry[i] = a[i]-'0' + sum[i] - '0'+ car;
                if(carry[i]>9)
                {
                    car = 1;
                    x++;
                }
                else
                {
                    car = 0;
                }
            }
        }
        else if(sz1>sz)
        {
            for(i=sz1-1; i>=0; i--)
            {
                carry[i] = b[i]-'0' + sum[i] - '0'+ car;
                if(carry[i]>9)
                {
                    car = 1;
                    x++;
                }
                else
                {
                    car = 0;
                }
            }
        }
        if(x==0)
        {
            printf("No carry operation.\n");
        }
        else if(x==1)
        {
            printf("%d carry operation.\n", x);
        }
        else
        {
            printf("%d carry operations.\n", x);
        }
    }
    return 0;
}
