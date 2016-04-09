#include <stdio.h>
#include <string.h>

int main()
{
    int len,i=0,j,b,k=0,len2;
    b=0;
    char ch;
    char a[10000];
    while(scanf("%c", &a[i])==1)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            printf("%c",a[i]);
            i++;
            k=0;
        }
        else
        {
            if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
            {
                i++;
                k++;
            }
            else
            {
                if(a[i-k]=='a'||a[i-k]=='A'||a[i-k]=='e'||a[i-k]=='E'||a[i-k]=='i'||a[i-k]=='I'||a[i-k]=='o'||a[i-k]=='O'||a[i-k]=='u'||a[i-k]=='U')
                {
                    for(j=i-k; j<=i-1; j++)
                    {
                        printf("%c",a[j]);
                    }
                    if(a[i]=='\0' || a[i]=='\n')
                        printf("\n");
                    else if(a[i]==' ' && a[i-1]>='0' && a[i-1]<='9')
                        printf(" ");
                    else
                        printf("ay%c",a[i]);
                }
                else
                {
                    for(j=i-k+1; j<=i-1; j++)
                    {
                        printf("%c",a[j]);
                    }
                    if(a[i]=='\0' || a[i]=='\n')
                        printf("\n");
                    else if(a[i]==' ' && a[i-1]>='0' && a[i-1]<='9')
                        printf(" ");
                    else
                        printf("%cay%c",a[i-k],a[i]);
                }
                k = 0;
            }
        }
    }
    return 0;
}
//freopen("In.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
