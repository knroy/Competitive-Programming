#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i,j,t,m,n,len;
    int c;
    char arr[10050],a[1000][1000];
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(arr);
        len = strlen(arr);
        c = sqrt(len);
        if(c*c==len)
        {
            m = 0;
            for(i=0; i<c; i++)
            {
                for(j=0; j<c; j++)
                {
                    a[i][j]=arr[m];
                    m++;
                }
            }
            for(i=0; i<c; i++)
            {
                for(j=0; j<c; j++)
                {
                    printf("%c",a[j][i]);
                }
            }
            printf("\n");
        }
        else
            printf("INVALID\n");
    }
    return 0;
}
