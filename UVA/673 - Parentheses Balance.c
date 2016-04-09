#include <stdio.h>
#include <string.h>

char str[10000],Stack[10000];
int tail;

void push(char ch)
{
    Stack[tail] = ch;
    tail++;
}
void pop()
{
    tail--;
}
int empty()
{
    if(tail==0)
        return 1;
    return 0;
}
int main()
{
    int top,i,j,len,n,p;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(str);
        len =strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]==')' && Stack[tail-1]=='(' || str[i]==']' && Stack[tail-1]=='[')
            {
                pop();
            }
            else
            {
                push(str[i]);
            }
        }
        if(empty())
            printf("Yes\n");
        else
            printf("No\n");
        memset(str,'\0',sizeof(str));
        memset(Stack,'\0',sizeof(Stack));
        tail = 0;
    }
    return 0;
}
