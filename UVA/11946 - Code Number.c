#include <stdio.h>
#include <string.h>

int main()
{
    char a[120];
    int t,len,i,j,l;
    while(scanf("%d",&t)==1)
    {
        getchar();
        for(j=1; j<=t; j++)
        {
            while(gets(a))
            {
                len = strlen(a);
                if(len==0)
                    break;
                for(i=0; a[i]!='\0'; i++)
                {
                    if(a[i]=='0')
                        printf("O");
                    else if(a[i]=='1')
                        printf("I");
                    else if(a[i]=='2')
                        printf("Z");
                    else if(a[i]=='3')
                        printf("E");
                    else if(a[i]=='4')
                        printf("A");
                    else if(a[i]=='5')
                        printf("S");
                    else if(a[i]=='6')
                        printf("G");
                    else if(a[i]=='7')
                        printf("T");
                    else if(a[i]=='8')
                        printf("B");
                    else if(a[i]=='9')
                        printf("P");
                    else
                        printf("%c",a[i]);
                }
                printf("\n");
                memset(a,'\0',sizeof(a));
            }
            if(j!=t)
                printf("\n");
        }
    }
    return 0;
}
