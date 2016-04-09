#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    int hour, min,n_hour,n_min;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d:%d", &hour, &min);
        n_min = 60 - min;
        if(hour<=10)
        {
            n_hour = 12- (hour+1);
        }
        else if(hour==12)
        {
            n_hour = hour-1;
        }
        else if(hour==11)
        {
            n_hour = hour+1;
        }
        if(n_min==60)
        {
            n_hour = n_hour+1;
            n_min = 0;
        }
        if(n_hour>12)
        {
            n_hour = n_hour - 12;
        }
        if(n_min<10 && n_hour<10)
        {
            printf("0%d:0%d\n", n_hour,n_min);
        }
        else if(n_min<10 && n_hour>=10)
        {
            printf("%d:0%d\n", n_hour,n_min);
        }
        else if(n_min>=10 && n_hour<10)
        {
            printf("0%d:%d\n", n_hour,n_min);
        }
        else
        {
            printf("%d:%d\n", n_hour,n_min);
        }
    }
    return 0;
}
