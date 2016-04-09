#include <stdio.h>
#include <string.h>

typedef struct
{
    char fline[150];
    char sline[150];
} slogan;

int main()
{
    int n,q,i,j;
    slogan line[150];
    slogan arr[150];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(line[i].fline);
        gets(line[i].sline);
    }
    scanf("%d",&q);
    getchar();
    for(i=0; i<q; i++)
    {
        gets(arr[i].fline);
    }
    for(i=0; i<q; i++)
    {
        for(j=0; j<n; j++)
        {
            if(strcasecmp(arr[i].fline,line[j].fline)==0)
                printf("%s\n",line[j].sline);
        }
    }
    return 0;

}
