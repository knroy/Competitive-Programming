#include <stdio.h>
#include <string.h>

int main()
{
    char a[21],b[21];
    int i,k,n,len1,len2,x=0;
    scanf("%d", &n);
    for(k=1; k<=n; k++)
    {
        x = 0;
        scanf("%s %s", a, b);
        len1 = strlen(a);
        len2 = strlen(b);
        if(len1 == len2)
        {
            for(i=0; i<len1; i++)
            {
                if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
                {
                    a[i] = '0';
                }
            }
            a[i]='\0';
            for(i=0; i<len2; i++)
            {
                if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
                {
                    b[i] = '0';
                }
            }
            b[i]='\0';
            for(i=0; i<len1; i++)
            {
                if(a[i]==b[i])
                {
                    x = x ;
                }
                else
                {
                    x++;
                }
            }
            a[i] = '\0';
            b[i] = '\0';
            if(x==0)
            {
                printf("Yes\n");
            }
            else if(x>0)
            {
                printf("No\n");
            }
            x = 0;
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
