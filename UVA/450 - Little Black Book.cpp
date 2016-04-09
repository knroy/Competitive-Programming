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
#include <cctype>
#define MEM(a,b) memset((a),(b),sizeof(a))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

using namespace std;

typedef struct
{
    char title[25],f_name[25],l_name[25],Dep[60],add[50],H_phone[50],W_phone[30],C_box[30];
} blackbook;

blackbook total[20000];

int main()
{
    int n,i,j=0,l,m;
    char str[100],str2[1000],part[100];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(str);
        while(gets(str2) && strlen(str2)!=0)
        {
            strcpy(total[j].Dep,str);
            int len = strlen(str2);
            int flag = 1;
            m = 0;
            for(l=0; l<=len; l++)
            {
                if(str2[l]==',' || l==len)
                {
                    part[m]='\0';
                    if(flag==1)
                        strcpy(total[j].title,part);
                    else if(flag==2)
                        strcpy(total[j].f_name,part);
                    else if(flag==3)
                        strcpy(total[j].l_name,part);
                    else if(flag==4)
                        strcpy(total[j].add,part);
                    else if(flag==5)
                        strcpy(total[j].H_phone,part);
                    else if(flag==6)
                        strcpy(total[j].W_phone,part);
                    else
                        strcpy(total[j].C_box,part);
                    m = 0;
                    flag++;
                }
                else
                    part[m++] = str2[l];
            }
            j++;
        }
    }
    for(i=0; i<j; i++)
    {
        for(m=0; m<j-i-1; m++)
        {
            if(strcmp(total[m].l_name,total[m+1].l_name)>0)
            {
                blackbook tmp;
                tmp = total[m];
                total[m] = total[m+1];
                total[m+1] = tmp;
            }
        }
    }
    for(i=0; i<j; i++)
    {
        printf("----------------------------------------\n");
        printf("%s %s %s\n",total[i].title,total[i].f_name,total[i].l_name);
        printf("%s\n",total[i].add);
        printf("Department: %s\n",total[i].Dep);
        printf("Home Phone: %s\n",total[i].H_phone);
        printf("Work Phone: %s\n",total[i].W_phone);
        printf("Campus Box: %s\n",total[i].C_box);
    }
    return 0;
}
