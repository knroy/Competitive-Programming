#include <stdio.h>

int main()
{
    int a[3],i,n;
    while(scanf("%d %d %d",&a[0],&a[1],&a[2])==3)
    {
        if(a[0]==a[1] && a[1]==a[2])
            printf("*\n");
        else
        {
            int b[2]= {0};
            for(i=0; i<3; i++)
            {
                if(a[i]==1)
                    b[1]++;
                else
                    b[0]++;
            }
            if(b[0]==1)
                n = 0;
            else
                n = 1;
            for(i=0; i<3; i++)
            {
                if(a[i]==n)
                {
                    printf("%c\n",65+i);
                    break;
                }
            }
        }
    }
    return 0;
}
