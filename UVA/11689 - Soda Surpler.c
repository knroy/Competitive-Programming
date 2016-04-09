#include <stdio.h>

int main()
{
    int t,i,e,f,c;
    int total,temp;
    int mod=0,num=0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d",&e,&f,&c);
        total = e + f;
        mod = 0;
        num=0;
        while(total>mod)
        {
            temp = total/c;
            mod = total%c;
            num+=temp;
            total = temp + mod;
        }
        printf("%d\n", num);
    }
    return 0;
}
