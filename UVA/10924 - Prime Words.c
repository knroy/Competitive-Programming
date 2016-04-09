#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char word[21];
    int i,j,len,total=0,count=0;
    while(scanf("%s", word)!=EOF)
    {
        len = strlen(word);
        total = 0;
        count = 0;
        for(i=0; i<len; i++)
        {
            if(word[i]==toupper(word[i]))
            {
                total = total + word[i]-38;
            }
            else if(word[i]==tolower(word[i]))
            {
                total = total + word[i]-96;
            }
        }
        word[i]='\0';
        for(j=1; j<=total; j++)
        {
            if(total%j==0)
            {
                count++;
            }
        }
        if(total==1 || count ==2)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
