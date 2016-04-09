#include <stdio.h>
#include <string.h>
#define MAX 150

typedef struct
{
    char home_s[MAX];

} ownhomework;

int main()
{
    int s,d,t,i,j,day[MAX],temp,temp_day;
    ownhomework gf_sub[MAX];
    char arr[MAX];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&s);
        getchar();
        for(j=0; j<s; j++)
        {
            scanf("%s %d",gf_sub[j].home_s,&day[j]);
        }
        scanf("%d",&d);
        getchar();
        scanf("%s",arr);
        temp = 0;
        for(j=0; j<s; j++)
        {
            if(strcasecmp(arr,gf_sub[j].home_s)==0)
            {
                temp = 1;
                temp_day = day[j];
            }
        }
        if(temp_day<=d && temp==1)
            printf("Case %d: Yesss\n",i);
        else if(temp==1 && temp_day>d && temp_day<=d+5)
            printf("Case %d: Late\n",i);
        else if(temp==0 || temp_day>d+5)
            printf("Case %d: Do your own homework!\n",i);
    }
}
