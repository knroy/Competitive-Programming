#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char robot[110];
} robotic;

int main()
{
    int c,n,i,num,pos;
    char arr[110],b[10];
    scanf("%d",&c);
    robotic lf[110];
    while(c--)
    {
        scanf("%d",&n);
        getchar();
        num = 0;
        i = 0;
        while(n--)
        {
            gets(arr);
            if(arr[0]=='L')
            {
                num -= 1;
                strcpy(lf[i].robot,arr);
            }
            else if(arr[0]=='R')
            {
                num += 1;
                strcpy(lf[i].robot,arr);
            }
            else if(arr[0]=='S')
            {
                sscanf(arr,"%*s %*s %d",&pos);
                strcpy(lf[i].robot,lf[pos-1].robot);
                strcpy(arr,lf[i].robot);
                if(arr[0]=='L')
                {
                    num -= 1;
                }
                else
                {
                    num += 1;
                }
            }
            i++;
        }
        printf("%d\n",num);
    }
    return 0;
}
