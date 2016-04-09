#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int b1,b2;

int binary(int a)
{
    int n=0;
    while(a!=0)
    {
        int temp = a%2;
        a = a / 2;
        if(temp==1)
            n++;
    }
    return n;
}

int main()
{
    int n,len,i,j,num,sum,hexa;
    char m[10];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        hexa = 0;
        scanf("%s",m);
        sscanf(m,"%d",&num);
        b1 = binary(num);
        len = strlen(m)-1;
        for(j=len; j>=0; j--)
        {
            hexa+= (m[j]-'0') * pow(16,(len-j));
        }
        m[j]='\0';
        b2 = binary(hexa);
        printf("%d %d\n",b1,b2);
    }
    return 0;
}
