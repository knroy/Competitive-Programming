#include <stdio.h>
int main()
{
    long long int array[100000], n, c, d, s,l;
    while(scanf("%lld", &n) && n)
    {
        for (c = 0; c < n; c++)
        {
            scanf("%lld", &array[c]);
        }
        l = 0;
        for (c = 0 ; c<n-1; c++)
        {
            for (d = 0 ; d < n - c - 1; d++)
            {
                if (array[d] > array[d+1])
                {
                    s = array[d];
                    array[d] = array[d+1];
                    array[d+1]= s;
                    l++;
                }
            }
        }
        printf("%lld\n",l);
    }
    return 0;
}

