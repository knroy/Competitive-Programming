#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char str1[100],str2[100];

void stringmaking(char stra[],char strb[])
{
    int i;
    int lena = strlen(stra);
    int lenb = strlen(strb);
    str1[0] = '0';
    str1[1] = 'x';
    str2[0] = '0';
    str2[1] = 'x';
    for(i=2; i<lena+2; i++)
    {
        str1[i] = stra[i-2];
    }
    str1[i]='\0';
    for(i=2; i<lenb+2; i++)
    {
        str2[i] = strb[i-2];
    }
    str2[i] = '\0';
}

void binary(int a)
{
    int c,i=12,bol[13]= {0};
    c = a;
    while(a!=0)
    {
        bol[i] = a%2;
        a = a / 2;
        i--;
    }
    if(c==0)
    {
        printf("0000000000000");
    }
    else
    {
        for(i=0; i<13; i++)
        {
            printf("%d", bol[i]);
        }
    }
    memset(bol,0,sizeof(bol));
}

int main()
{
    char str[1000],s1[100],s2[100],ch;
    int deci1,deci2,n,ans;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(str);
        sscanf(str,"%s %c %s",s1,&ch,s2);
        stringmaking(s1,s2);
        sscanf(str1,"%X",&deci1);
        sscanf(str2,"%X",&deci2);
        if(ch=='+')
            ans = deci1 + deci2;
        else
            ans = deci1 - deci2;
        binary(deci1);
        printf(" %c ",ch);
        binary(deci2);
        printf(" = %d\n",ans);
        memset(str1,'\0',sizeof(str1));
        memset(str2,'\0',sizeof(str2));
    }
    return 0;

}
