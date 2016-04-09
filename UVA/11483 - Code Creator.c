#include <stdio.h>
#include <string.h>

int main()
{
    int i,len,n,j,l=1;
    char sp1=92,sp2=34;
    char a[100000];
    while(scanf("%d",&n)==1)
    {
        getchar();
        if(n==0)
            break;
        printf("Case %d:\n",l);
        printf("#include<string.h>\n#include<stdio.h>\nint main()\n{\n");
        for(i=0; i<n; i++)
        {
            gets(a);
            len = strlen(a);
            printf("printf(\"");
            for(j=0; j<len; j++)
            {
                if(a[j]==34)
                    printf("\\\"");
                else if(a[j]==92)
                    printf("\\\\");
                else
                    printf("%c",a[j]);
            }
            printf("\\n%c);",sp2);
            printf("\n");
        }
        printf("printf(%c%cn%c);\n",sp2,sp1,sp2);
        printf("return 0;\n}\n");
        l++;
    }
    return 0;
}
