#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int color[300][300],r,c,i,j,item[300];
int head,tail,count_one,c_len,r_len;
char g[300][300];
int cx[8] = {-1,-1,0,1,1,1,0,-1};
int cy[8] = {0,1,1,1,0,-1,-1,-1};

void push(int num)
{
    item[tail] = num;
    tail++;
}

int empty()
{
    return tail==head;
}

int q_front()
{
    return item[head];
}

void pop()
{
    head++;
}

void bfs(int z,int a)
{
    count_one = 1;
    color[z][a] = 1;
    push(z);
    push(a);
    while(!empty())
    {
        int k;
        int nr = q_front();
        pop();
        int nc = q_front();
        pop();
        for(k = 0; k<8; k++)
        {
            int x = nr + cx[k];
            int y = nc + cy[k];
            if(x>=0 && x<r_len && y>=0 && y<c_len)
                if(g[x][y]=='W' && color[x][y]==0)
                {
                    count_one++;
                    color[x][y] = 1;
                    push(x);
                    push(y);
                }
        }
    }
    memset(color,0,sizeof(color));
}

int main()
{
    int t,k,l,m,p,q,tcase;
    char str[300];
    scanf("%d\n\n",&tcase);
    for(t=0; t<tcase; t++)
    {
        i = 0;
        while(gets(str))
        {
            if(str[0]=='\0' && strlen(str)==0)
                break;
            if(str[0]=='L' || str[0]=='W')
            {
                c_len = strlen(str);
                for(j=0; j<c_len; j++)
                {
                    g[i][j] = str[j];
                }
                i++;
            }
            else if(str[0]>='0' && str[0]<='9')
            {
                r_len = i;
                sscanf(str,"%d %d",&l,&m);
                if(g[l-1][m-1]=='W' && color[l-1][m-1]==0)
                {
                    bfs(l-1,m-1);
                    printf("%d\n",count_one);
                }
                else
                {
                    printf("0\n");
                }
            }
        }
        if(t<tcase-1)
            printf("\n");
        memset(g,'\0',sizeof(g));
        memset(str,'\0',sizeof(str));
        memset(item,0,sizeof(item));
        head = 0;
        tail = 0;
        c_len = 0;
    }
    return 0;
}
