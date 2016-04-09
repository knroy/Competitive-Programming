#include <stdio.h>
#include <math.h>

int check_prime(int a)
{
    int c;
    for ( c = 2 ; c <= a - 1 ; c++ )
    {
        if ( a%c == 0 )
            return 0;
    }
    if ( c == a )
        return 1;
}
int main()
{
    int i,n,result;
    int p,num1,num2,num;
    while(scanf("%d", &n)==1)
    {
        result = check_prime(n);
        if(n==1)
        {
            printf("%d is prime.\n", n);
        }
        else if(result==1)
        {
            num1 = n;
            num2=0;
            while(num1!=0)
            {
                p = num1%10;
                num2 = p + num2*10;
                num1 = num1/10;
            }
            num = check_prime(num2);
            if(num==1 && num2!=n)
            {
                printf("%d is emirp.\n", n);
            }
            else
            {
                printf("%d is prime.\n", n);
            }
        }
        else
        {
            printf("%d is not prime.\n", n);
        }
    }
    return 0;
}
