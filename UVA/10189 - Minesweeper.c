#include <stdio.h>
#include <string.h>

int main()
{
    char a[150][150],c [150];
    long int i,j,l=0,n,m,flag=0;
    while(1)
    {
        gets(c);
        sscanf(c,"%ld%ld",&n,&m);
        if(n==0 && m==0)
            break;
        long b[150][150] = {0};
        for(i=0; i<n; i++)
            gets (a[i]);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]=='*')
                {
                    b[i][j+1]++;
                    b[i+1][j+1]++;
                    b[i+1][j]++;
                    b[i+1][j-1]++;
                    b[i][j-1]++;
                    b[i-1][j-1]++;
                    b[i-1][j]++;
                    b[i-1][j+1]++;
                }
            }
        }
        if(flag==1)
            printf("\n");
        flag = 1;
        printf("Field #%ld:\n", ++l);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]=='*')
                    printf("%c",a[i][j]);
                else
                    printf("%ld",b[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

/*
9 9
9 9
....*.*..
..*.*....
.........
.......*.
.*.......
.........
......*..
.....*...
.*.......
*/
