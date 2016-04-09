#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,s,rem;
    while(scanf("%d",&n)==1)
    {
        rem = 0;
        s = 0;
        while(1)
        {
            rem = (rem*10 + 1)%n;
            s++;
            if(rem==0)
                break;
        }
        printf("%d\n",s);
    }
    return 0;
}
