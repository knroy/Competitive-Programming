#include <stdio.h>
#include <string.h>
#define max 12

int main()
{
    int len,n;
    char a[max];
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        gets(a);
        len = strlen(a);
        if(len==3)
        {
            if((a[0]=='o' && a[1]=='n')||(a[0]=='o' && a[2]=='e')||(a[1]=='n'&&a[2]=='e'))
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
        else if(len==5)
        {
            printf("3\n");
        }
    }
    return 0;
}
