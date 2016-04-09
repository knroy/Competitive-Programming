#include <stdio.h>
#include <string.h>
#include <math.h>

long int len1,len2,len,i,j;
char c[200];

typedef struct
{
    char bigfact[200];
} countfactsum;

countfactsum str[200];

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

int main()
{
    long int n,p=0;
    char arraa[200],arrab[200];
    char arra[200],arrb[200];
    int extra,sum,k,l;
    while(gets(arrb))
    {
        if(p==0)
        {
            strcpy(str[0].bigfact,arrb);
            p = 1;
            if(arrb[0]=='0' && arrb[1]=='\0')
            {
                break;
            }
            continue;
        }
        if(arrb[0]=='0' && arrb[1]=='\0')
        {
            printf("%s\n",str[0].bigfact);
            break;
        }
        else
        {
            strcpy(arra,str[0].bigfact);
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
            strcpy(str[0].bigfact,c);
        }
    }
    return 0;
}
