#include <iostream>
#include <cstdio>

using namespace std;

int fibo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n,sum;
    scanf("%d",&n);
    sum = fibo(n);
    printf("%d\n",sum);
    return 0;
}
