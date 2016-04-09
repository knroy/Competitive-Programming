#include <stdio.h>
#include <string.h>

int main()
{
    char str[100001];
    int i,s4,s15,s100,s400,s55,len,a=0;
    while(scanf("%s", str)==1)
    {
        if(a>0)
            printf("\n");
        a++;
        s4=0,s15=0,s100=0,s400=0,s55=0;
        len = strlen(str);
        for(i=0; i<len; i++)
        {
            s4 = (s4*10 + str[i]-'0')%4;
            s15 = (s15*10 + str[i]-'0')%15;
            s55 = (s55*10 + str[i]-'0')%55;
            s100 = (s100*10 + str[i]-'0')%100;
            s400 = (s400*10 + str[i]-'0')%400;
        }
        if((!s4 && s100) || !s400)
        {
            printf("This is leap year.\n");
            if(!s15)
                printf("This is huluculu festival year.\n");
            if(!s55)
                printf("This is bulukulu festival year.\n");
        }
        else
        {
            if(!s15)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
