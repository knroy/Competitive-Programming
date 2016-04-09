#include <stdio.h>
#include <string.h>

int main()
{
    char m[22],a[22];
    int b,c=0,d=0,ch;
    int n,i,j,l,len,len2,total;
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        gets(m);
        len = strlen(m);
        j = 0,l=0;
        while(j<len)
        {
            if(m[j]>='0' && m[j]<='9')
            {
                a[l]= m[j];
                l++;
            }
            j++;
        }
        m[j]='\0';
        a[l]='\0';
        len2 = strlen(a);
        for(j=0; j<len2; j++)
        {
            if(j%2==0)
            {
                ch = 0;
                b = (a[j]-'0')*2;
                b = b -9*((b-1)/9);
                c = c+b;
            }
            else
            {
                d+= (a[j] - '0');
            }
        }
        total = c + d;
        if(total%10==0)
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
        c = 0,d = 0, ch = 0;
    }
    return 0;
}
