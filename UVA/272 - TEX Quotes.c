#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char ch;
    while(scanf("%c", &ch)==1)
    {
        if(ch=='"')
        {
            if(i%2==0)
            {
                printf("``");
            }
            else
            {
                printf("''");
            }
            i++;
        }
        else
            printf("%c",ch);
    }
    return 0;
}
