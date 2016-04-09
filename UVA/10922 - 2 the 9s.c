#include<stdio.h>
#include<string.h>

int main()
{
    int i,len,num,deg,s,sum,temp;
    char a[10000];
    while(scanf("%s",a)==1)
    {
        if(a[0]=='0' && a[1]=='\0')
            break;
        len = strlen(a);
        num = 0;
        for(i=0; i<len; i++)
        {
            num = num + a[i]-'0';
        }
        if(num%9==0)
        {
            deg = 1;
            while(1)
            {
                if(num==9)
                    break;
                else
                    deg++;
                s = num;
                sum = 0;
                while(s!=0)
                {
                    temp = s%10;
                    s = s/10;
                    sum+=temp;
                }
                num = sum;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n",a,deg);
        }
        else
            printf("%s is not a multiple of 9.\n",a);
    }
    return 0;
}
