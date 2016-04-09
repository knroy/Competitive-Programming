#include <stdio.h>
#include <string.h>
#include <math.h>

long int len1,len2,len,i,j;
char c[5001];

typedef struct
{
    char bigfact[5001];
} countfactsum;

countfactsum str[5001];

void string_reverse()
{
    int len = strlen(c);
    int i;
    int mid = len/2;
    char temp;
    for(i=0; i<mid; i++)
    {
        temp = c[i];
        c[i] = c[len-i-1];
        c[len-i-1] = temp;
    }
    c[len] = '\0';
}

int maxx()
{
    if(len1>len2)
        return len1;
    else
        return len2;
}

void fibo()
{
    char arra[5001],arrb[5001];
    char b[10],a[10];
    int extra,sum,k,l;
    a[0] = '0';
    b[0] = '1';
    a[1]='\0';
    b[1]='\0';
    sscanf(a,"%s",str[0].bigfact);
    sscanf(b,"%s",str[1].bigfact);
    for(i=2; i<=5000; i++)
    {
        strcpy(arra,str[i-2].bigfact);
        strcpy(arrb,str[i-1].bigfact);
        len1 = strlen(arra);
        len2 = strlen(arrb);
        len = maxx();
        extra = 0;
        sum = 0;
        j = 0;
        k = len1-1;
        l = len2-1;
        while(1)
        {
            len--;
            if(k<0)
                arra[k] = '0';
            if(l<0)
                arrb[l] = '0';
            sum = (arra[k]-'0') + (arrb[l]-'0') + extra;
            k--;
            l--;
            if(sum>=10)
            {
                sum = sum - 10;
                extra = 1;
            }
            else
                extra = 0;
            c[j] = sum + '0';
            j++;
            if(extra == 0 && len<=0)
                break;
        }
        c[j]='\0';
        string_reverse(c);
        strcpy(str[i].bigfact,c);
    }
}
int main()
{
    fibo();
    long int n;
    while(scanf("%ld",&n)==1)
    {
        printf("The Fibonacci number for %ld is %s\n",n,str[n].bigfact);
    }
    return 0;
}
