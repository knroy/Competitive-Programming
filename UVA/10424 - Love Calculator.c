#include <stdio.h>
#include <string.h>

int main()
{
    char a[30],b[30];
    int i,len_a,len_b;
    double avg,ate,bte;
    int a_r=0,b_r=0;
    while(gets(a))
    {
        gets(b);
        len_a = strlen(a);
        len_b = strlen(b);
        for(i=0; i<len_a; i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                a_r+= a[i]-96;
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
                a_r+= a[i]-64;
            }
        }
        a[i]='\0';
        ate = a_r - 9 *((a_r-1)/9);
        for(i=0; i<len_b; i++)
        {
            if(b[i]>='a' && b[i]<='z')
            {
                b_r = b_r + b[i]-96;
            }
            else if(b[i]>='A' && b[i]<='Z')
            {
                b_r = b_r + b[i]-64;
            }
        }
        b[i]='\0';
        bte = b_r - 9 *((b_r-1)/9);
        if(ate>=bte)
        {
            avg = (bte/ate) * 100;
        }
        else
        {
            avg = (ate/bte) * 100;
        }
        printf("%.2lf %%\n", avg);
        a_r = 0;
        b_r = 0;
    }
    return 0;
}
