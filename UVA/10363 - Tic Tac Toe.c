#include <stdio.h>
#include <string.h>

int main()
{
    char a[3][3];
    int n,i,j,k;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        if(i>0)
            getchar();
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
                scanf("%c",&a[j][k]);
            getchar();
        }
        if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')
            printf("yes\n");
        else if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')
            printf("yes\n");
        else if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')
            printf("yes\n");
        else if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')
            printf("yes\n");
        else if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X')
            printf("yes\n");
        else if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X')
            printf("yes\n");
        else if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')
            printf("yes\n");
        else if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}

