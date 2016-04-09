#include <stdio.h>

int main()
{
    int l,n,i,j,a,b,c,num,count;
    char ch[100000];
    int c0, c1, c2, c3, c4, c5, c6, c7, c8, c9;
    scanf("%d", &l);
    for(b=1; b<=l; b++)
    {
        scanf("%d", &n);
        j = 0;
        count = 0;
        for(i=1; i<=n; i++)
        {
            a = i;
            while(a>0)
            {
                num = a%10;
                a = a/10;
                ch[j] = num+'0';
                j++;
                count++;
            }
        }
        c0=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
        for(i=0; i<count; i++)
        {
            if(ch[i]=='0')
            {
                c0++;
            }
            else if(ch[i]=='1')
            {
                c1++;
            }
            else if(ch[i]=='2')
            {
                c2++;
            }
            else if(ch[i]=='3')
            {
                c3++;
            }
            else if(ch[i]=='4')
            {
                c4++;
            }
            else if(ch[i]=='5')
            {
                c5++;
            }
            else if(ch[i]=='6')
            {
                c6++;
            }
            else if(ch[i]=='7')
            {
                c7++;
            }
            else if(ch[i]=='8')
            {
                c8++;
            }
            else if(ch[i]=='9')
            {
                c9++;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",c0, c1, c2, c3, c4, c5, c6, c7, c8, c9);
    }
    return 0;
}
