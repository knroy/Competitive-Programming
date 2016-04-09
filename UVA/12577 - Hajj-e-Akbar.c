#include<stdio.h>
#include<string.h>

int main()
{
    char a[5];
    int sz,i=1;
    while(scanf("%s",a)==1)
    {
        sz = strlen(a);
        if(sz==1)
        {
            break;
        }
        else if(sz==4)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
            i++;
        }
        else if(sz==5)
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
            i++;
        }
    }
    return 0;
}
