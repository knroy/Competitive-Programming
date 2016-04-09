#include <stdio.h>
#include <math.h>

int main()
{
    int n,c_date,c_mon,c_year,b_date,b_mon,b_year,age;
    int date,mon,year,total,i=1;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d/%d/%d", &c_date,&c_mon,&c_year);
        scanf("%d/%d/%d", &b_date,&b_mon,&b_year);
        total = (c_year - b_year) * 365 + (c_mon - b_mon) * 30 + (c_date - b_date);
        if(total>=0)
        {
            age = total/365;
        }
        else
        {
            age = total;
        }
        if(age<0)
        {
            printf("Case #%d: Invalid birth date\n",i);
        }
        else if(age>130)
        {
            printf("Case #%d: Check birth date\n",i);
        }
        else
        {
            printf("Case #%d: %d\n", i,age);
        }
        i++;
    }
    return 0;
}
