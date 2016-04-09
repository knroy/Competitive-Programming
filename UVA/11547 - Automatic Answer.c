#include <stdio.h>
#include <math.h>

int main()
{
    int n,t,i,j,a,ch[10],k,l;
    int ad,mul,mul1,sub,ext;
    scanf("%d", &t);
    for(j=1; j<=t; j++)
    {
        scanf("%d", &n);
        mul = n * 63;
        ad = mul + 7492;
        mul1 = ad * 5;
        sub = mul1 - 198;
        ext = abs(sub);
        k = 0;
        while(k<2)
        {
            l = ext%10;
            ext = ext / 10;
            ch[k] = l;
            k++;
        }
        printf("%d\n", ch[1]);
    }
    return 0;
}
