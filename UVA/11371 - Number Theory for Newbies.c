#include <stdio.h>
#include <string.h>

int main()
{
    long long int i,j,k,len,num,rev_num,dif,mul;
    char a[10000],b[10000],ch;
    while(scanf("%s", a)==1)
    {
        num = 0,rev_num = 0;
        len = strlen(a);
        for(i=0; i<len-1; i++)
        {
            for(j=0; j<len-i-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    ch = a[j];
                    a[j]=a[j+1];
                    a[j+1] = ch;
                }
            }
        }
        for(i=0; i<len; i++)
        {
            if(a[i]=='0')
                continue;
            else
                break;
        }
        k=1;
        for(j=0; j<len; j++)
        {
            if(j!=i)
            {
                b[k]=a[j];
                k++;
            }
        }
        b[k]='\0';
        b[0]=a[i];
        if(a[0]=='0' && a[1]=='\0')
            printf("%s - %s = 0 = 9 * 0\n",a,a);
        else if(b[len-1]=='0')
            printf("%s - %s = 0 = 9 * 0\n",b,b);
        else
        {
            for(i=0; i<len; i++)
            {
                num = num * 10 + b[i]-'0';
            }
            for(i=0; i<len-1; i++)
            {
                for(j=0; j<len-i-1; j++)
                {
                    if(b[j]<b[j+1])
                    {
                        ch = b[j];
                        b[j]=b[j+1];
                        b[j+1] = ch;
                    }
                }
            }
            for(j=0; j<len; j++)
            {
                rev_num = rev_num * 10 + b[j]-'0';
            }
            dif = rev_num - num;
            mul = dif/9;
            printf("%lld - %lld = %lld = 9 * %lld\n", rev_num,num,dif,mul);
        }
    }
    return 0;
}
