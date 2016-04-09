#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,len,num=0;
    char a[1000000];
    while(scanf("%d", &n)==1)
    {
        getchar();
        gets(a);
        len = strlen(a);
        int b = 0;
        for(i=0; i<=len; i++)
        {
            if(a[i]==',' || a[i]=='\0')
            {
                for(j=b; j<i; j++)
                {
                    num = num*10 + a[j]-'0';
                }
                if(num==2 || num ==3 || num ==5 || num==7 || num==13 || num==17 ||num==19 ||num==31 ||num==61 ||num==89 || num==107)
                {
                    printf("Yes\n");
                }
                else
                {
                    printf("No\n");
                }
                num = 0;
                b = i+1;
            }
        }
    }
    return 0;
}
