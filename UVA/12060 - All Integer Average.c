#include <stdio.h>
#include <math.h>

int countchar(int x)
{
    int j=0;
    while(x!=0)
    {
        x = x/10;
        j++;
    }
    return j;
}

int isdivisable(int a,int n)
{
    int i,y=0;
    for(i=2; i<=n; i++)
    {
        if(a%i==0 && n%i==0)
        {
            y = i;
        }
    }
    return y;
}

int main()
{
    //http://ideone.com/7SKgXe
    //freopen("In.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n,i,j,k,l=1,m,p,a,b,c,in_avg,rest,total;
    while(scanf("%d", &n) && n)
    {
        b = 0,m=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d", &a);
            b = b + a;
        }
        c = abs(b);
        m = isdivisable(c,n);
        if(m!=0)
        {
            c = c/m;
            n = n/m;
        }
        in_avg = c/n;
        rest = c - in_avg*n;
        j = countchar(in_avg);
        k = countchar(n);
        p = countchar(rest);
        total = j+k;
        if(n==1)
        {
            if(b<0)
            {
                printf("Case %d:\n- %d\n",l,in_avg);
            }
            else
            {
                printf("Case %d:\n%d\n",l,in_avg);
            }
        }
        else if(c>n)
        {
            if(b>0)
            {
                printf("Case %d:\n", l);
                for(i=0; i<total-p; i++)
                {
                    printf(" ");
                }
                printf("%d\n",rest);
                printf("%d",in_avg);
                for(i=0; i<total-j; i++)
                {
                    printf("-");
                }
                printf("\n");
                for(i=0; i<total-k; i++)
                {
                    printf(" ");
                }
                printf("%d\n",n);
            }
            else if(b<0)
            {
                printf("Case %d:\n", l);
                for(i=0; i<total-p+2; i++)
                {
                    printf(" ");
                }
                printf("%d\n",rest);
                printf("- %d",in_avg);
                for(i=0; i<total-j; i++)
                {
                    printf("-");
                }
                printf("\n");
                for(i=0; i<total-k+2; i++)
                {
                    printf(" ");
                }
                printf("%d\n",n);
            }
        }
        else if(c<n)
        {
            if(b>0)
            {
                printf("Case %d:\n", l);
                for(i=0; i<k-p; i++)
                {
                    printf(" ");
                }
                printf("%d\n",rest);
                for(i=0; i<k; i++)
                {
                    printf("-");
                }
                printf("\n");
                printf("%d\n",n);
            }
            else if(b<0)
            {
                printf("Case %d:\n", l);
                for(i=0; i<k-p+2; i++)
                {
                    printf(" ");
                }
                printf("%d\n",rest);
                printf("- ");
                for(i=0; i<k; i++)
                {
                    printf("-");
                }
                printf("\n");
                for(i=0; i<2; i++)
                {
                    printf(" ");
                }
                printf("%d\n",n);
            }
        }
        l++;
    }
    return 0;
}
