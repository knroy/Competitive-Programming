#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("In.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int len,i,j,b,k;
    char a[10000];
    while(gets(a))
    {
        len=strlen(a);
        b=-1;
        for(i=0; i<=len; i++)
        {
            if(a[i]==' ' || a[i]=='\0')
            {
                for(j=i-1; j>b; j--)
                    printf("%c",a[j]);
                if(a[i]!='\0')
                    printf(" ");
                else
                    printf("\n");

                b=i;
            }
        }
    }
    return 0;
}
