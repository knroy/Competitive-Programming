#include <stdio.h>
#include <string.h>
#include <math.h>

int bin(char a[])
{
    int len = strlen(a);
    int i,sum=0;
    for(i=len-1; i>=0; i--)
    {
        sum += (a[i]-'0') * pow(2,len-i-1);
    }
    return sum;
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    int t,i,n,d;
    char str1[50],str2[50];
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(str1);
        gets(str2);
        n = bin(str1);
        d = bin(str2);
        if(gcd(n,d)==1)
            printf("Pair #%d: Love is not all you need!\n",i);
        else
            printf("Pair #%d: All you need is love!\n",i);
    }
}
