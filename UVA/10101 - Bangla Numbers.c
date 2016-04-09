#include <stdio.h>

int main()
{
    long long int a,i,j,l=1,temp,dim[1000];
    while(scanf("%lld", &a)==1)
    {
        if(a==0)
        {
            printf("%4lld. %lld\n",l,a);
            l++;
            continue;
        }
        i = 1;
        while(a!=0)
        {
            if((i-2)%4==0)
            {
                temp = a %10;
                dim[i] = temp;
                a = a/10;
            }
            else
            {
                temp = a %100;
                dim[i] = temp;
                a = a/100;
            }
            i++;
        }
        printf("%4lld.",l);
        for(j=i-1; j>=1; j--)
        {
            if((j-2)%4==0 && dim[j]!=0)
                printf(" %lld shata",dim[j]);
            else if((j-3)%4==0 && dim[j]!=0)
                printf(" %lld hajar",dim[j]);
            else if((j-4)%4==0 && dim[j]!=0)
                printf(" %lld lakh",dim[j]);
            else if((j-5)%4==0 && j!=1 && dim[j]!=0)
                printf(" %lld kuti",dim[j]);
            else if((j-5)%4==0 && j!=1 && dim[j]==0)
                printf(" kuti");
            else if(j==1 && dim[j]!=0)
                printf(" %lld",dim[j]);
            if(j==1)
                printf("\n");
        }
        l++;
    }
    return 0;
}
