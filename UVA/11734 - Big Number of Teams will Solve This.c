#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,k,len1,len2;
    char to[150],jo[150],ao[150],aoj[150];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(to);
        gets(jo);
        len1 = strlen(to);
        len2 = strlen(jo);
        if(strcmp(to,jo)==0)
        {
            printf("Case %d: Yes\n",i+1);
        }
        else
        {
            k = 0;
            for(j=0; j<len1; j++)
            {
                if(to[j]!=' ')
                {
                    ao[k] = to[j];
                    k++;
                }
            }
            ao[k]='\0';
            k = 0;
            for(j=0; j<len2; j++)
            {
                if(jo[j]!=' ')
                {
                    aoj[k] = jo[j];
                    k++;
                }
            }
            aoj[k]='\0';
            if(strcmp(aoj,ao)==0)
                printf("Case %d: Output Format Error\n",i+1);
            else
                printf("Case %d: Wrong Answer\n",i+1);
        }
    }
    return 0;
}
