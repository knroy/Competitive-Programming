#include <stdio.h>
#include <string.h>
#define maxx 2000010
char str1[maxx],str2[maxx];

int main()
{
    int len1,len2,i,j,l,k;
    while(scanf("%s %s",str1,str2)==2)
    {
        len1 = strlen(str1);
        len2 = strlen(str2);
        l = 0,k=0;
        for(i=0; i<len1; i++)
        {
            for(j=l; j<len2; j++)
            {
                if(str2[j]==str1[i])
                {
                    l = j + 1;
                    k++;
                    break;
                }
            }
        }
        str1[len1] = '\0';
        str2[len2] = '\0';
        if(len1==k)
            printf("Yes\n");
        else
            printf("No\n");
        memset(str1,'\0',sizeof(str1));
        memset(str2,'\0',sizeof(str2));
    }
    return 0;
}
