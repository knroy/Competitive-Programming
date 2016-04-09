#include <stdio.h>
#include <string.h>

int ispalindrome(char str[])
{
    int len = strlen(str);
    int mid = (int)len/2;
    int i;
    for(i=0; i<mid; i++)
    {
        if(str[i]!=str[len-i-1])
            return 0;
    }
    return 1;
}

int lengthtobeadd(char p[],int n)
{
    int i,j;
    j=0;
    for(i=0; i<n-j; i++)
    {
        if(p[i]==p[n-j-1] && p[i+1]==p[n-j-2])
        {
            printf("%c\n",p[i]);
            j++;
        }
    }
    return j;
}

int main()
{
    int i,j,k,l,m,len;
    char a[10000],b[10000];
    while(scanf("%s", a)==1)
    {
        l = 0;
        len = strlen(a);
        if(ispalindrome(a))
        {
            printf("%s\n", a);
        }
        else
        {
            for(i=len-1; i>=0; i--)
            {
                if(a[i]==a[i-1])
                {
                    l++;
                }
                else
                    break;
            }
            printf("%d\n", l);
            m = len - l;
            j = lengthtobeadd(a,m);
            printf("%d\n", j);
            k = 0;
            m = len-2*j-1;
            for(i=m; i>=0; i--)
            {
                b[k] = a[i];
                k++;
            }
            b[k]='\0';
            a[i]='\0';
            strcat(a,b);
            printf("%s\n", a);
        }
    }
    return 0;
}

