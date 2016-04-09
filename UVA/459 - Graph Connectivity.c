#include <stdio.h>
#include <string.h>
int g[100][100];

int main()
{
    int tcase,i,j;
    char ch,str[10];
    scanf("%d",&tcase);
    getchar();
    getchar();
    while(tcase--)
    {
        scanf("%c",&ch);
        getchar();
        int r = ch - 64;
        while(gets(str))
        {
            if(strlen(str)==0)
                break;
            g[str[0]-65][str[1]-65] = 1;
            g[str[1]-65][str[0]-65] = 1;
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
                printf("%d",g[i][j]);
            printf("\n");
        }
    }
    return 0;
}
