#include <stdio.h>
#include <string.h>

long long int arrayForFiboStore[82];

void initialize()
{
    ///*** DP initialization ***///

    memset(arrayForFiboStore,-1,sizeof(arrayForFiboStore));
    arrayForFiboStore[0] = 0;
    arrayForFiboStore[1] = 1;

}

long long fiboValueReturn(int n)
{
    ///*** DP function ***///

    if(arrayForFiboStore[n]>=0)
        return arrayForFiboStore[n];
    else
        return arrayForFiboStore[n]= fiboValueReturn(n-1)+fiboValueReturn(n-2);
}

int main()
{
    long long int i,n;
    scanf("%lld",&n); // Nth Value will find

    initialize();

    ///***This Printf will Print from 0 to n fibonacci Series***///

    for(i=0; i<=n; i++)
    {
        printf("%lld ",fiboValueReturn(i));
    }
    printf("\n\n");


    ///***This printf will print only the Nth fibonacci Number***///

    printf("%lld\n\n",fiboValueReturn(n));

    ///***If sir said that print (n+1)th Fibonacci number just printf this printf***///

    printf("%lld\n",fiboValueReturn(n+1));

    return 0;
}

//KN Roy
