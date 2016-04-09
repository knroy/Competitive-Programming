#include <stdio.h>
#include <string.h>

int isPalindrome(char strL[])
{
    int len = strlen(strL);
    int mid  = (int)len/2;
    int i;
    for(i=0; i<mid; i++)
    {
        if(strL[i]!=strL[len-i-1])
            return 0;
    }
    return 1;
}
int digit(char stm[])
{
    int len = strlen(stm);
    int i;
    for(i=0; i<len; i++)
    {
        if(stm[i]>='0' && stm[i]<='9')
            return 1;
    }
    return 0;
}
int mirrornum(char sta[])
{
    int len = strlen(sta);
    int i,x=0;
    for(i=0; i<len; i++)
    {
        if(sta[0]=='1' || sta[0]=='8')
        {
            if(sta[0]==sta[i])
            {
                x = x;
            }
            else
            {
                x++;
            }
        }
        else
        {
            x++;
        }
    }
    return x;
}
int main()
{
    char str[10000];
    int len,n,l,i,x;
    while(scanf("%s",str)==1)
    {
        l = 0;
        len = strlen(str);
        if(isPalindrome(str))
        {
            if(digit(str))
            {
                x = mirrornum(str);
                if(x==0)
                    printf("%s -- is a mirrored palindrome.\n\n",str);
                else
                    printf("%s -- is a regular palindrome.\n\n",str);
            }
            else if(len%2==0 && !digit(str))
            {
                printf("%s -- is a mirrored palindrome.\n\n",str);
            }
            else if(len%2==1)
            {
                n = len/2;
                if(str[n]!=digit(str) && str[n]=='1'
                   || str[n]=='8' ||
                   str[n]=='A'||
                    str[n]=='H' ||
                    str[n]=='I' ||
                    str[n]=='M' ||
                    str[n]=='O' ||
                    (str[n]>='T' && str[n]<='Y'))
                {
                    printf("%s -- is a mirrored palindrome.\n\n",str);
                }
                else
                {
                    printf("%s -- is a regular palindrome.\n\n",str);
                }
            }
            else
            {
                printf("%s -- is a regular palindrome.\n\n",str);
            }
        }
        else
        {
            if(digit(str))
            {
                printf("%s",str);
                for(i=0; i<len; i++)
                {
                    if(str[i]=='2')
                        str[i]='S';
                    else if(str[i]=='3')
                        str[i]='E';
                    else if(str[i]=='5')
                        str[i]='Z';
                }
                n = len/2;
                for(i=0; i<n; i++)
                {
                    if(str[i]==str[len-i-1])
                    {
                        l = l;
                    }
                    else
                    {
                        l++;
                    }
                }
                if(l==0 && len%2==0)
                {
                    printf(" -- is a mirrored string.\n\n");
                }
                else if(l==0 && len%2==1)
                {
                    if(str[n]=='1' || str[n]=='8' || str[n]=='A'|| str[n]=='H' || str[n]=='I' || str[n]=='M' || str[n]=='O' || (str[n]>='T' && str[n]<='Y'))
                        printf(" -- is a mirrored string.\n\n");
                    else
                        printf(" -- is not a palindrome.\n\n");
                }
                else
                    printf(" -- is not a palindrome.\n\n");
            }
            else
            {
                printf("%s -- is not a palindrome.\n\n", str);
            }
        }
    }
    return 0;
}

