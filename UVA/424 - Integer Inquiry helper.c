#include <stdio.h>
#include <string.h>
#define num 1010

char *revstring(char c[])
{
    char ch;
    int k = 0,i;
    int len = strlen(c);
    int mid = (int)len/2;
    for(i=0; i<mid; i++)
    {
        ch = c[i];
        c[i] = c[len-i-1];
        c[len-i-1] = ch;
    }
    c[len]='\0';
    return c;
}

int lenmax(int len1,int len2)
{
    if(len1>=len2)
        return len1;
    else
        return len2;
}

char *stradd(char a[],char b[])
{
    char c[num];
    int len1 = strlen(a);
    int len2 = strlen(b);
    if(len1==0)
        return revstring(b);
    else if(len2==0)
        return revstring(a);
    else
    {
        int sum=0,extra=0;
        int len = lenmax(len1,len2);
        int j = 0;
        while(1)
        {
            len1--;
            len2--;
            len--;
            if(len1<0)
                a[len1]='0';
            if(len2<0)
                b[len2]='0';
            sum = a[len1]-'0'+b[len2]-'0' + extra;
            if(sum>=10)
            {
                sum-=10;
                extra = (int)sum/10;
            }
            else
                extra = 0;
            if(len>=0)
            {
                c[j] = sum + '0';
            }
            else if(len<0)
            {
                if(extra==0 && sum==0)
                {
                    break;
                }
                else
                {
                    c[j] = sum + '0';
                }
            }
            j++;
        }
        c[j]='\0';
        printf("Main::: %s\n",c);
        return revstring(c);
    }
}

int main()
{
    char a[num],b[num],c[num];
    int to=0,len,len1,len2,len3;
    memset(b,'\0',sizeof(b));
    while(gets(a))
    {
        stradd(a,b);
        if(to==0)
        {
            printf("%s\n",revstring(a));
        }
        //printf("%s\n",stradd(a,b));
        strcpy(b,stradd(a,b));
        printf("%s\n",b);
        to++;
    }
    return 0;
}
