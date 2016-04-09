#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int len,i=0,j,b,k=0,len2;
    b=0;
    char ch;
    char a[10000];
    while(scanf("%c", &a[i])==1)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            printf("%c",a[i]);
            b = i;
            i++;
        }
        else
        {
            if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z')
            {
                continue;
            }
            else
            {
                if(a[b]=='a' || a[b]=='A' || a[b]=='e' || a[b]=='E' || a[b]=='i' || a[b]=='I' || a[b]=='o' || a[b]=='O' || a[b]=='u' || a[b]=='U' )
                    j = b;
                else
                    j = b+1;
                for( ; j<i; j++)
                {
                    printf("%c",a[j]);
                }

            }
        }
    }
    return 0;

}
