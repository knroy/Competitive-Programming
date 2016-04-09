#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int color[110][110],r,c,i,j,item[12100],cl;
int head,tail;
char g[110][110];

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
    if(g[i][j]=='/')
        cl = 1;
    else
        cl = 2;
    color[i][j] = cl;
    push(i);
    push(j);
    while(!empty())
    {
        int k;
        int nr = q_front();
        pop();
        int nc = q_front();
        pop();
        int cx[4] = {-1,0,0,1};
        int cy[4] = {0,-1,1,0};
        for(k = 0; k<4; k++)
        {
            int x = nr + cx[k];
            int y = nc + cy[k];
            if(g[x][y]==' ' && color[x][y]==0)
            {
                color[x][y] = cl;
                push(x);
                push(y);
            }
        }
    }
}

int main()
{
    freopen("In572.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t,s_len[100],k,l,m,co=0;
    char str[12100],arr[100];
    do
    {
        if(co>0)
            printf("\n");
        i = 0;
        while(1)
        {
            gets(str);
            s_len[i] = strlen(str);
            for(j=0; j<s_len[i]; j++)
            {
                g[i][j] = str[j];
            }
            i++;
            if(str[0]=='_')
                break;
        }
        l = i;
        for(i=0; i<l; i++)
        {
            for(j=0; j<s_len[i]; j++)
            {
                if(g[i][j]=='/' || g[i][j]=='#' && color[i][j]==0)
                {
                    bfs();
                }
            }
        }
        for(i=0; i<l; i++)
        {
            for(j=0; j<s_len[i]; j++)
            {
                if(color[i][j]==1)
                    printf("/");
                else if(color[i][j]==2)
                    printf("#");
                else
                    printf("%c",g[i][j]);
            }
            printf("\n");
        }
        memset(g,'\0',sizeof(g));
        memset(str,'\0',sizeof(str));
        memset(arr,'\0',sizeof(arr));
        memset(item,0,sizeof(item));
        memset(color,0,sizeof(color));
        memset(s_len,0,sizeof(s_len));
        head = 0;
        tail = 0;
        co++;
    } while(1);
    return 0;
}


