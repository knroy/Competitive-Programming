#include <stdio.h>
#include <math.h>

int main()
{
    long int n,i,root;
    while(scanf("%ld", &n) && n)
    {
        root = sqrt(n);
        if(n==root*root)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
