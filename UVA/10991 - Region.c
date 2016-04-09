#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    double r1,r2,r3,a,b,c,A,B,C,s,area,res,s1,s2,s3;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf", &r1,&r2,&r3);

        a = r2+r3,b = r1+r3,c = r1+r2;
        A = acos((b*b+c*c-a*a)/(2*b*c)),B = acos((c*c+a*a-b*b)/(2*c*a)),C = acos((a*a+b*b-c*c)/(2*a*b));
        s = (a+b+c)/2.0;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        s1 = A * r1 * r1 * 0.5;
        s2 = B * r2 * r2 * 0.5;
        s3 = C * r3 * r3 * 0.5;
        res = area - s1 - s2 - s3;
        printf("%.6lf\n", res);
    }
    return 0;
}
