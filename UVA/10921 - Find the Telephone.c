#include <stdio.h>
#include <string.h>

int main()
{
    char tel[31];
    int i,len;
    while(gets(tel))
    {
        len = strlen(tel);
        for(i=0; i<len; i++)
        {
            if(tel[i]>='A' && tel[i]<='C')
            {
                printf("2");
            }
            else if(tel[i]>='D' && tel[i]<='F')
            {
                printf("3");
            }
            else if(tel[i]>='G' && tel[i]<='I')
            {
                printf("4");
            }
            else if(tel[i]>='J' && tel[i]<='L')
            {
                printf("5");
            }
            else if(tel[i]>='M' && tel[i]<='O')
            {
                printf("6");
            }
            else if(tel[i]>='P' && tel[i]<='S')
            {
                printf("7");
            }
            else if(tel[i]>='T' && tel[i]<='V')
            {
                printf("8");
            }
            else if(tel[i]>='W' && tel[i]<='Z')
            {
                printf("9");
            }
            else
            {
                printf("%c", tel[i]);
            }
        }
        printf("\n");
    }
}
