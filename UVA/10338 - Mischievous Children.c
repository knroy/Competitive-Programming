#include <stdio.h>
#include <string.h>

long long int facto[20];

void fact()
{
    int i;
    facto[0] = 1;
    facto[1] = 1;
    for(i=2; i<=20; i++)
    {
        facto[i] = facto[i-1]*i;
    }
}

int main()
{
    fact();
    char str[25];
    int i,len,t,j;
    long long total;
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(str);
        len =strlen(str);
        total = facto[len];
        int alpha[27]= {0};
        for(j=0; j<len; j++)
        {
            alpha[str[j]-65]++;
        }
        for(j=0; j<26; j++)
        {
            if(alpha[j]>1)
                total = total / facto[alpha[j]];
        }
        printf("Data set %d: %lld\n",i,total);
    }
    return 0;
}
