#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int a,b,i,j,k,sum;
    int len1,len2;
    char c[10000],d[10000],ad[10000];
    while(scanf("%d %d",&a,&b)==2)
    {
        i = 0,j=0,sum=0;
        while(a!=0)
        {
            c[i] = a%2 + 48 ;
            a = a / 2;
            i++;
        }
        while(b!=0)
        {
            d[j] = b%2 + 48;
            b = b / 2;
            j++;
        }
        len1 = strlen(c);
        len2 = strlen(d);
        j = 0;
        if(len1<len2)
        {
            len1 = len2;
        }
        for(i=len1-1; i>=0; i--)
        {
            if(c[i]=='1' && d[i]=='1' || c[i]=='0' && d[i]=='0' || c[i]=='0' && d[i]!='1')
            {
                ad[j] = '0';
            }
            else if(c[i]=='1' && d[i]=='0' || c[i]=='0' && d[i]=='1')
            {
                ad[j] = '1';
            }
            else if( c[i]!='1' && d[i]=='0' || c[i]=='0' && d[i]!='1')
            {
                ad[j]='0';
            }
            else if( c[i]!='0' && d[i]=='1' || c[i]=='1' && d[i]!='0')
            {
                ad[j] = '1';
            }
            j++;
        }
        ad[i]='\0';
        k = j-1;
        for(i=0; i<j; i++)
        {
            sum+= (ad[i]- '0') * pow(2,k);
            k--;
        }
        printf("%d\n", sum);
    }
    return 0;
}

