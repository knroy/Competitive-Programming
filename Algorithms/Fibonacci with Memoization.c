#include <stdio.h>

int main()
{
    //KN Roy

    long long int i,j,n;
    long long int arrayForFiboStore[82];
    arrayForFiboStore[0] = 0;
    arrayForFiboStore[1] = 1;
    for(i=2; i<=81; i++)
    {
        arrayForFiboStore[i] = arrayForFiboStore[i-1]+arrayForFiboStore[i-2];
    }

    scanf("%lld",&n);

    ///***This Printf will Print from 0 to n fibonacci Series***///

    for(i=0; i<=n; i++)
    {
        printf("%lld ",arrayForFiboStore[i]);
    }
    printf("\n\n");


    ///***This printf will print only the Nth fibonacci Number***///

    printf("%lld\n\n",arrayForFiboStore[n]);

    ///***If sir said that print (n+1)th Fibonacci number just printf this printf***///

    printf("%lld\n",arrayForFiboStore[n+1]);

    return 0;
}
