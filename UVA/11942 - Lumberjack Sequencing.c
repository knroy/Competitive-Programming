#include <stdio.h>

int main()
{
    int a[101],i,t,x;
    scanf("%d", &t);
    printf("Lumberjacks:\n");
    while(t--)
    {
        x = 0;
        for(i=0; i<10; i++)
        {
            scanf("%d", &a[i]);
        }
        if(a[0]>a[1])
        {
            for(i=1; i<10; i++)
            {
                if(a[i-1]>a[i])
                {
                    x = x;
                }
                else
                {
                    x++;
                }

            }
            if(x==0)
            {
                printf("Ordered\n");
            }
            else
            {
                printf("Unordered\n");
            }
        }
        else if(a[0]<a[1])
        {
            for(i=1; i<10; i++)
            {
                if(a[i-1]<a[i])
                {
                    x = x;
                }
                else
                {
                    x++;
                }

            }
            if(x==0)
            {
                printf("Ordered\n");
            }
            else
            {
                printf("Unordered\n");
            }
        }
        else
        {
            printf("Unordered\n");
        }
    }
    return 0;
}
