#include <stdio.h>
#include <string.h>

int main()
{
    int n,r,c;
    int i,j,k,len;
    char a[1000];
    while(scanf("%d %s", &n,&a)==2)
    {
        if(n==0)
            break;
        r = 2*n+3;
        c = n+2;
        len = strlen(a);
        for(j=0; j<r; j++)
        {
            for(i=0; i<len; i++)
            {
                if(i>0)
                    printf(" ");
                if(a[i]=='0')
                {
                    if(j==0 || j==r-1)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else if(j==r/2)
                    {
                        for(k=0; k<c; k++)
                            printf(" ");
                    }
                    else
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k==0 || k==n+1)
                                printf("|");
                            else
                                printf(" ");
                        }
                    }
                }
                else if(a[i]=='1')
                {
                    if(j==0 || j==r-1)
                    {
                        for(k=0; k<c; k++)
                        {
                            printf(" ");
                        }
                    }
                    else if(j==r/2)
                    {
                        for(k=0; k<c; k++)
                            printf(" ");
                    }
                    else
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k==n+1)
                                printf("|");
                            else
                                printf(" ");
                        }
                    }
                }
                else if(a[i]=='2')
                {
                    if(j==0 || j==r-1)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else if(j==r/2)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else
                    {
                        if(j<r/2)
                        {
                            for(k=0; k<c; k++)
                            {
                                if(k==n+1)
                                    printf("|");
                                else
                                    printf(" ");
                            }
                        }
                        else
                            for(k=0; k<c; k++)
                            {
                                if(k==0)
                                    printf("|");
                                else
                                    printf(" ");
                            }
                    }
                }
                else if(a[i]=='3')
                {
                    if(j==0 || j==r-1)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else if(j==r/2)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k==n+1)
                                printf("|");
                            else
                                printf(" ");
                        }
                    }
                }
                else if(a[i]=='4')
                {
                    if(j==0 || j==r-1)
                    {
                        for(k=0; k<c; k++)
                        {
                            printf(" ");
                        }
                    }
                    else if(j==r/2)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else
                    {
                        if(j<r/2)
                        {
                            for(k=0; k<c; k++)
                            {
                                if(k==0 || k==n+1)
                                    printf("|");
                                else
                                    printf(" ");
                            }
                        }
                        else
                            for(k=0; k<c; k++)
                            {
                                if(k==n+1)
                                    printf("|");
                                else
                                    printf(" ");
                            }
                    }
                }
                else if(a[i]=='5')
                {
                    if(j==0 || j==r-1)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else if(j==r/2)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else
                    {
                        if(j<r/2)
                        {
                            for(k=0; k<c; k++)
                            {
                                if(k==0)
                                    printf("|");
                                else
                                    printf(" ");
                            }
                        }
                        else
                            for(k=0; k<c; k++)
                            {
                                if(k==n+1)
                                    printf("|");
                                else
                                    printf(" ");
                            }
                    }
                }
                else if(a[i]=='6')
                {
                    if(j==0 || j==r-1)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else if(j==r/2)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else
                    {
                        if(j<r/2)
                        {
                            for(k=0; k<c; k++)
                            {
                                if(k==0)
                                    printf("|");
                                else
                                    printf(" ");
                            }
                        }
                        else
                            for(k=0; k<c; k++)
                            {
                                if(k==0 || k==n+1)
                                    printf("|");
                                else
                                    printf(" ");
                            }
                    }
                }
                else if(a[i]=='7')
                {
                    if(j==0)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else if(j==r/2)
                    {
                        for(k=0; k<c; k++)
                        {
                            printf(" ");
                        }
                    }
                    else
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k==n+1 && j<r-1)
                                printf("|");
                            else
                                printf(" ");
                        }
                    }
                }
                else if(a[i]=='8')
                {
                    if(j==0 || j==r-1)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else if(j==r/2)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k==0 || k==n+1)
                                printf("|");
                            else
                                printf(" ");
                        }
                    }
                }
                else if(a[i]=='9')
                {
                    if(j==0 || j==r-1)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else if(j==r/2)
                    {
                        for(k=0; k<c; k++)
                        {
                            if(k>0 && k<c-1)
                                printf("-");
                            else
                                printf(" ");
                        }
                    }
                    else
                    {
                        if(j<r/2)
                        {
                            for(k=0; k<c; k++)
                            {
                                if(k==0 || k==n+1)
                                    printf("|");
                                else
                                    printf(" ");
                            }

                        }
                        else
                            for(k=0; k<c; k++)
                            {
                                if(k==n+1)
                                    printf("|");
                                else
                                    printf(" ");
                            }
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
