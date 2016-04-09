#include<stdio.h>
int main()
{
    int a,b=0,i;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d", &a)==1)
    {
        for(i=1; i<a; i++)
        {
            if(a%i==0)
            {
                b+= i;
            }
        }
        if(a==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else if(b==a)
        {
            printf("%5d  PERFECT\n",a);
        }
        else if(b>a)
        {
            printf("%5d  ABUNDANT\n",a);
        }
        else if(b<a)
        {
            printf("%5d  DEFICIENT\n",a);
        }
        b = 0;
    }
    return 0;
}
