#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct
{
    char name[110];
} date;

int main()
{
    date arr[110];
    char a[100][100]= {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    int a_len[16]= {5,8,2,3,5,8,2,3,5,8,2,5,5,8,2,3};
    int n,i,j,l,k,m;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s",arr[i].name);
    }
    m = (int)(16 * ((int)ceil((double)n/16)));
    i = 0,l=0,k=0;
    while(l<m)
    {
        printf("%s: ",arr[i].name);
        i++;
        if(i==n)
        {
            i = 0;
        }
        for(j=0; j<a_len[k]; j++)
        {
            printf("%c", a[k][j]);
        }
        printf("\n");
        k++;
        if(k==16)
        {
            k = 0;
        }
        l++;
    }
    return 0;
}
