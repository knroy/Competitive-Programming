#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char num[100000];
    int len,i,j;
    double a;
    while(scanf("%s", num)==1)
    {
        if(num[0]=='0')
        {
            break;
        }
        else
        {
            len = strlen(num);
            a = 0;
            for(i=0,j=len; i<len,j>=0; i++,j--)
            {
                a = a + (pow(2,j)-1)*(num[i]-'0');
            }
            printf("%.0lf\n",a);
        }
    }
    return 0;
}
