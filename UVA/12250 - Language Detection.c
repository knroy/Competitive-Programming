#include <stdio.h>
#include <string.h>

int main()
{
    int i=1;
    char a[30];
    while(scanf("%s", a)==1)
    {
        if(a[0]=='#' && a[1]=='\0')
        {
            break;
        }
        else
        {
            if(strcasecmp(a,"HELLO")==0)
            {
                printf("Case %d: ENGLISH\n",i);
            }
            else if(strcasecmp(a,"HOLA")==0)
            {
                printf("Case %d: SPANISH\n",i);
            }
            else if(strcasecmp(a,"HALLO")==0)
            {
                printf("Case %d: GERMAN\n",i);
            }
            else if(strcasecmp(a,"BONJOUR")==0)
            {
                printf("Case %d: FRENCH\n",i);
            }
            else if(strcasecmp(a,"CIAO")==0)
            {
                printf("Case %d: ITALIAN\n",i);
            }
            else if(strcasecmp(a,"ZDRAVSTVUJTE")==0)
            {
                printf("Case %d: RUSSIAN\n",i);
            }
            else
            {
                printf("Case %d: UNKNOWN\n",i);
            }
        }
        i++;
    }
    return 0;
}
