#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

int main()
{
    int t,change,i,temp;
    int N[12][12],j,l,mat,a1,a2;
    char str[12];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&mat);
        getchar();
        for(j=0; j<mat; j++)
        {
            gets(str);
            int len = strlen(str);
            for(l=0; l<len; l++)
                N[j][l] = str[l]-'0';
            str[l]='\0';
        }
        scanf("%d",&change);
        getchar();
        for(int k = 1; k<=change; k++)
        {
            gets(str);
            if(str[0]=='i' || str[0]=='d')
            {
                if(str[0]=='i')
                {
                    for(j=0; j<mat; j++)
                        for(l=0; l<mat; l++)
                            N[j][l] = (N[j][l]+1)%10;
                }
                else
                {
                    for(j=0; j<mat; j++)
                        for(l=0; l<mat; l++)
                        {
                            N[j][l] = (N[j][l]-1);
                            if(N[j][l]<0)
                                N[j][l] = 10 + N[j][l];
                        }

                }
            }
            else if(str[0]=='r' || str[0]=='c')
            {
                sscanf(str,"%*s %d %d",&a1,&a2);
                if(str[0]=='r')
                {
                    for(l=0; l<mat; l++)
                    {
                        temp = N[a1-1][l];
                        N[a1-1][l] = N[a2-1][l];
                        N[a2-1][l] = temp;
                    }
                }
                else
                {
                    for(l=0; l<mat; l++)
                    {
                        temp = N[l][a1-1];
                        N[l][a1-1] = N[l][a2-1];
                        N[l][a2-1] = temp;
                    }
                }
            }
            else
            {
                for(j=0; j<mat; j++)
                {
                    for(l=j+1; l<mat; l++)
                    {
                        temp = N[j][l];
                        N[j][l] = N[l][j];
                        N[l][j] = temp;
                    }
                }
            }
        }
        printf("Case #%d\n",i);
        for(j=0; j<mat; j++)
        {
            for(l=0; l<mat; l++)
                printf("%d",N[j][l]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
