#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,difference;
    while(scanf("%d %d", &a, &b)==2)
    {
        difference = abs(a-b);
        if(a== -1 && b==-1)
        {
            break;
        }
        else if(difference>50)
        {
            printf("%d\n", 100-difference);
        }

        else
        {
            printf("%d\n", difference);
        }
    }
    return 0;
}
