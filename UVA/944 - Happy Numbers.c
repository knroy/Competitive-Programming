#include <stdio.h>
#include <math.h>

int main()
{
    long int num,f_num,l_num,b,t,i,mod,sum,l,c,flag=0;
    while(scanf("%ld %ld", &f_num,&l_num)==2)
    {
        if(flag>0)
            printf("\n");
        while(f_num<=l_num)
        {
            c = f_num;
            num = f_num;
            sum = 0;
            l = 0;
            while(num!=1 && l<9)
            {
                sum = 0;
                while(num!=0)
                {
                    mod = num%10;
                    sum+= mod*mod;
                    num/=10;
                }
                num = sum;
                l++;
            }
            if(num==1)
                printf("%ld %ld\n",c,l+1);
            f_num++;
        }
        flag++;
    }
    return 0;
}
