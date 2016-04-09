#include <stdio.h>
#include <string.h>

int main()
{
    freopen("In572.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int i=0,j,k,n,len,biglen=0,sen;
    char str[150],arr[150][150]= {'\0'};
    char str2[150][150];
    while(gets(str))
    {
        len = strlen(str);
        if(len>biglen)
            biglen = len;
        for(j=0; j<=len; j++)
        {
            arr[j][i] = str[j];
        }
        i++;
    }
    sen = i-1;
    for(k=0; k<biglen; k++)
    {
        for(j=sen; j>=0; j--)
        {
            str2[k][sen-j] = arr[k][j];
        }
    }
    arr[k][j]='\0';
    for(k=0; k<biglen; k++)
    {
        for(j=0; str2[k][j]!='\0'; j++)
        {
            printf("%c",str2[k][j]);
        }
        printf("\n");
    }

    return 0;
}
