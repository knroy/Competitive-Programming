#include <stdio.h>
#include <math.h>

int power(int a)
{
    int j=0,mod=0,temp;
    while(a>=2)
    {
        temp = a / 2;
        mod = a%2;
        a = temp + mod;
        j++;
    }
    return j;
}
int main()
{
    long long int n,i,num1,num2,a;
    while(scanf("%lld", &n) && n)
    {
        num1 = 2 * n + 1;
        a = num1+1;
        i = power(a);
        num2 = pow(2,i)-1;
        if(num1==num2)
            printf("Bob\n");
        else
            printf("Alice\n");
    }
    return 0;
}
