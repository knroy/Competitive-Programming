#include <stdio.h>
#include <string.h>
char str2[10000];

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}


void *stringpure(char str[])
{
    int i,j,len;
    len = strlen(str);
    i = 0;
    j = 0;
    while(i<len)
    {
        if(str[i-1]==' ' && str[i]!=' ' && j!=0)
        {
            str2[j]= ' ';
            j++;
        }
        if(str[i]>='0' && str[i]<='9')
        {
            str2[j] = str[i];
            j++;
        }
        i++;
    }
}

int main()
{
    int n,i,num[1000],j,len;
    char a[10000];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(a);
        stringpure(a);
        int b = 0,x=0;
        int big = 0;
        num[x] = 0;
        len = strlen(str2);
        for(i=0; i<=len; i++)
        {
            if((str2[i]==' ' && str2[i+1]!=' ') || str2[i]=='\0')
            {
                for(j=b; j<i; j++)
                {
                    num[x] = num[x]*10 + (str2[j]-'0');
                }
                b = i+1;
                x++;
                num[x]=0;
            }
        }
        i = 0;
        while(i<x)
        {
            for(j=i+1; j<x; j++)
            {
                int gcdd = gcd(num[i],num[j]);
                if(gcdd>=big)
                    big = gcdd;
            }
            i++;
        }
        printf("%d\n",big);
        memset(str2,'\0',sizeof(str2));
    }
    return 0;
}
