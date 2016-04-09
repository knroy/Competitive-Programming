#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l,m,len,n,c[150];
    char a[210],b[210],dec[210];
    scanf("%d", &n);
    getchar();
    for(i=1; i<=n; i++)
    {
        gets(a);
        len = strlen(a);
        k = 0, l = 0;
        for(j=0; j<len; j++)
        {
            if(a[j]>='A' && a[j]<='Z')
            {
                b[k]=a[j];
                k++;
                l++;
                c[l]=0;
            }
            else
            {
                c[l] = c[l]*10 + a[j]-'0';
            }
        }
        l = 1;
        printf("Case %d: ",i);
        for(j=0; j<k; j++)
        {
            for(m=0; m<c[l]; m++)
            {
                printf("%c", b[j]);
            }
            l++;
        }
        printf("\n");
    }
    return 0;
}
