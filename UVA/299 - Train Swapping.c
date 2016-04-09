#include <stdio.h>

int main()
{
    int array[10000], n, c, d, s, l;
    while(scanf("%d", &n)==1)
    {
        for (c = 0; c < n; c++)
        {
            scanf("%d", &array[c]);
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
        printf("Minimum exchange operations : %d\n",l);
    }
    return 0;
}
