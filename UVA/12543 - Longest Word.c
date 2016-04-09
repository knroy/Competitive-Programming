#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //freopen("In.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int i=0,j,c=0,m[110],l,k,len,num=0;
    char a[10000],b[1100];
    while(scanf("%c", &a[i])==1)
    {
        if(a[i]=='D' && a[i-1]=='-' && a[i-2]=='N' && a[i-3]=='-' && a[i-4]=='E')
        {
            i++;
            break;
        }
        else
        {
            i++;
            continue;
        }
    }
    len = strlen(a);
    k = 0;
    for(i=0; i<len; i++)
    {
        if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z' || a[i]=='-')
        {
            continue;
        }
        else
        {
            m[k] = i-c;
            if(m[k]>num)
            {
                num = m[k];
                l = 0;
                for(j=c; j<i; j++)
                {
                    if(a[j]>='A' && a[j]<='Z' || a[j]>='a' && a[j]<='z'|| a[j]=='-')
                    {
                        b[l] = tolower(a[j]);
                        l++;
                    }
                }
                b[l]='\0';
            }
            c = i;
            k++;
        }
    }
    printf("%s\n",b);
    return 0;
}
