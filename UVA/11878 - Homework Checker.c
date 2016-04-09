#include <stdio.h>
#include <string.h>

int main()
{
    int a,b,c,res,len,count=0,i,j,m;
    char arr[40],sign;
    while(gets(arr))
    {
        a = 0,b = 0,c = 0;
        len = strlen(arr);
        if(arr[len-1]!='?')
        {
            for(i=0; i<len; i++)
            {
                if(arr[i]=='+' || arr[i]=='-')
                {
                    sign = arr[i];
                    for(j=0; j<i; j++)
                    {
                        a = (a * 10 + arr[j] - '0');
                    }
                    m = i + 1;
                }
                else if(arr[i]=='=')
                {
                    for(j=m; j<i; j++)
                    {
                        b = b * 10 + arr[j]-'0';
                    }
                    for(j=i+1; j<len; j++)
                    {
                        c = c * 10 + arr[j]-'0';
                    }
                    break;
                }
            }
            arr[i]='\0';
            if(sign=='+')
                res = a + b;
            else
                res = a - b;
            if(res==c)
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
