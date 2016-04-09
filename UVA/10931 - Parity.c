#include <stdio.h>

int main()
{
    int x,count;
    long long int a,c;
    long long int i;
    long long bol[10000];
    while(scanf("%lld", &a) && a)
    {
        i=0,x=0;
        count=0;
        while(a!=0)
        {
            bol[i] = a%2;
            a = a / 2;
            count++;
            i++;
        }
        bol[i]='\0';
        printf("The parity of ");
        for(i=count-1; i>=0; i--)
        {
            printf("%lld", bol[i]);
            if(bol[i]==1)
            {
                x++;
            }
        }
        printf(" is %d (mod 2).\n", x);
    }
    return 0;
}
