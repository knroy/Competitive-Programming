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

int lengthtobeadd(char p[],int m)
{
    int i,j;
    j=0;
    for(i=m-j-1; i>=0; i--)
    {
        if(p[i]==p[i+j])
        {
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
            printf("%s\n", a);
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
            if(j%2==0)
            {
                len = len - 2*j;
            }
            else
            {
                len = len-j-(j/2)-1;
            }
            for(i=len; i>=0; i--)
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
