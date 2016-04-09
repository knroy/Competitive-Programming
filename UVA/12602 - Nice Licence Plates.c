#include <stdio.h>
#include <string.h>

int main()
{
    char a[5];
    int b,i,n,c_value,nice;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%3s-%d", a,&b);
        c_value = 26 * 26 * (a[0]-'A') + 26 * (a[1]-'A')+ a[2]-'A';
        nice = abs(c_value-b);
        if(nice<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
