#include <stdio.h>

int main()
{
    long int x1,y1,x2,y2,t,n,c,t1,t2;
    scanf("%ld",&c);
    while(c--)
    {
        scanf("%ld",&n);
        scanf("%ld",&t);
        while(n--)
        {
            scanf("%ld %ld %ld %ld",&x1,&y1,&x2,&y2);
            if(x1==x2 && y1==y2)
                printf("0\n");
            else if(((x1+y1)%2==1 && (x2+y2)%2==1) || ((x1+y1)%2==0 && (x2+y2)%2==0))
            {
                if( (x1+y1)==(x2+y2) || (x1==y1 && x2==y2) || (x1+y2)==(x2+y1))
                    printf("1\n");
                else
                    printf("2\n");
            }
            else
                printf("no move\n");
        }
    }
    return 0;
}
