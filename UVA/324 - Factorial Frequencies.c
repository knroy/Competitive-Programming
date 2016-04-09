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

void fact()
{
    char arra[5001],arrb[5001];
    char a[10];
    int extra,sum,k,l,m;
    a[0] = '1';
    a[1]='\0';
    sscanf(a,"%s",str[0].bigfact);
    for(i=1; i<=367; i++)
    {
        strcpy(arrb,str[i-1].bigfact);
        for(m=0; m<i; m++)
        {
            strcpy(arra,str[i].bigfact);
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
}
int main()
{
    fact();
    long int n;
    char arrc[800];
    while(scanf("%ld",&n) && n)
    {
        long int a[10]= {0};
        strcpy(arrc,str[n].bigfact);
        long int l = strlen(arrc);
        for(i=0; i<l; i++)
        {
            a[arrc[i]-'0']++;
        }
        printf("%ld! --\n",n);
        printf("   (0)    %ld    (1)    %ld    (2)    %ld    (3)    %ld    (4)    %ld\n",a[0],a[1],a[2],a[3],a[4]);
        printf("   (5)    %ld    (6)    %ld    (7)    %ld    (8)    %ld    (9)    %ld\n",a[5],a[6],a[7],a[8],a[9]);
    }
    return 0;
}

