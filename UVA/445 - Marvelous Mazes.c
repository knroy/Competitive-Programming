#include <stdio.h>
#include <string.h>

int main()
{
    int len,i,j,l,init=0,num;
    char str[100000];
    while(gets(str))
    {
        num=0;
        len = strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                init++;
            }
            else
            {
                for(j=i-1; j>=i-init; j--)
                {
                    num = num + str[j]-'0';
                }
                for(l=0; l<num; l++)
                {
                    if(str[i]>='A' && str[i]<='Z' || str[i]=='*')
                        printf("%c",str[i]);
                    else if(str[i]=='b')
                        printf(" ");
                }
                num = 0;
                init = 0;
                if(str[i]=='!')
                    printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
