#include <stdio.h>
#include <string.h>
#include <math.h>

int color[50][50],r,c,i,j,item[2500];
int head,tail,count_one,n;
char g[50][50];

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

void bfs()
{
    count_one = 0;
    count_one++;
    color[i][j] = 1;
    push(i);
    push(j);
    while(!empty())
    {
        int k;
        int nr = q_front();
        pop();
        int nc = q_front();
        pop();
        int cx[8] = {-1,-1,0,1,1,1,0,-1};
        int cy[8] = {0,1,1,1,0,-1,-1,-1};
        for(k = 0; k<8; k++)
        {
            int x = nr + cx[k];
            int y = nc + cy[k];
            if(g[x][y]=='1' && color[x][y]==0)
            {
                color[x][y] = 1;
                push(x);
                push(y);
                count_one++;
            }
        }
    }
    if(count_one>n)
        n = count_one;
}

int main()
{
    int t,s_len;
    char str[800];
    scanf("%d",&r);
    getchar();
    for(t=0; t<r; t++)
    {
        getchar();
        n = 0;
        i = 0;
        if(t>0)
            printf("\n");
        while(1)
        {
            gets(str);
            s_len = strlen(str);
            for(j=0; j<s_len; j++)
            {
                g[i][j] = str[j];
            }
            if(i==s_len-1)
                break;
            i++;
        }
        for(i=0; i<s_len; i++)
        {
            for(j=0; j<s_len; j++)
            {
                if(g[i][j]=='1' && color[i][j]==0)
                {
                    bfs();
                }
            }
        }
        printf("%d\n",n);
        memset(g,'\0',sizeof(g));
        memset(item,0,sizeof(item));
        memset(color,0,sizeof(color));
        memset(str,'\0',sizeof(str));
        head = 0;
        tail = 0;
        n = 0;
    }
    return 0;
}

