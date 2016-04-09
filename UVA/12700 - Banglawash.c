#include <stdio.h>
#include <string.h>
int B,W,T,A;

int matchfever(char str[],int len)
{
    int i;
    B=0,W=0,T=0,A=0;
    for(i=0; i<len; i++)
    {
        if(str[i]=='B')
            B++;
        else if(str[i]=='W')
            W++;
        else if(str[i]=='T')
            T++;
        else if(str[i]=='A')
            A++;
    }
    if(A==len)
        return 0;
    else if(B+A==len)
        return 1;
    else if(W+A==len)
        return 2;
    else if(B==W && A!=len)
        return 3;
    else if(B>W && (B+A)!=len)
        return 4;
    else if(W>B && (W+A)!=len)
        return 5;
}

int main()
{
    int t,n,i,res;
    char str[20];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        getchar();
        gets(str);
        res = matchfever(str,n);
        if(res==0)
            printf("Case %d: ABANDONED\n",i);
        else if(res==1)
            printf("Case %d: BANGLAWASH\n",i);
        else if(res==2)
            printf("Case %d: WHITEWASH\n",i);
        else if(res==3)
            printf("Case %d: DRAW %d %d\n",i,B,T);
        else if(res==4)
            printf("Case %d: BANGLADESH %d - %d\n",i,B,W);
        else if(res==5)
            printf("Case %d: WWW %d - %d\n",i,W,B);
        B=0,W=0,T=0,A=0;
    }
    return 0;
}
/*
6
3
BBB
3
WWW
3
BWB
4
BWWT
3
BTW
2
AA
*/
