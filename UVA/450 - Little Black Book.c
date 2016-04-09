#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char dp[10],tl[6],fn[10],ln[10],ha[20],hp[10],wp[10],CB[10];
    char total[60];
} blackbook;

int main()
{
    freopen("In.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    char dep[80],arr[80],f_dep[80],token[20];
    blackbook str[100];
    int t,i,j,len=0,l;
    scanf("%d",&t);
    getchar();
    for(i=0; i<t; i++)
    {
        gets(dep);
        char a[2];
        a[0]=',';
        a[1]='\0';
        strcat(dep,a);
        while(1)
        {
            gets(arr);
            if(arr[0]=='\0')
                break;
            strcpy(f_dep,dep);
            strcat(f_dep,arr);
            l = strlen(f_dep);
            int x = 0,cnt=0;
            for(j=0; j<l; j++)
            {
                if(f_dep[j]==',')
                {
                    cnt++;
                    if(cnt==4)
                    {
                        token[x] = '\0';
                        break;
                    }
                }
                else if(cnt>=3)
                {
                    token[x++] = f_dep[j];
                }
            }
            strcpy(str[len].total,f_dep);
            strcpy(str[len].ln,token);
            len++;
        }
    }
    for (i = 0; i < len; i++)
    {
        for (j = i+1; j < len; j++)
        {
            if (strcmp(str[i].ln, str[j].ln) > 0)
            {
                blackbook tmp;
                tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }
    }
    for(i=0; i<len; i++)
    {
        strcpy(arr,str[i].total);
        int lo = strlen(arr);
        int flag = 0;
        l=0;
        char token[20];
        for(j=0; j<=lo; j++)
        {
            if(arr[j]==',' || j==lo)
            {
                token[l]='\0';
                if(flag==0)
                    strcpy(str[i].dp,token);
                else if(flag==1)
                    strcpy(str[i].tl,token);
                else if(flag==2)
                    strcpy(str[i].fn,token);
                else if(flag==4)
                    strcpy(str[i].ha,token);
                else if(flag==5)
                    strcpy(str[i].hp,token);
                else if(flag==6)
                    strcpy(str[i].wp,token);
                else if(flag==7)
                    strcpy(str[i].CB,token);
                flag++;
                l = 0;
            }
            else
            {
                token[l++] = arr[j];
            }
        }
        printf("----------------------------------------\n");
        printf("%s %s %s\n",str[i].tl,str[i].fn,str[i].ln);
        printf("%s\n",str[i].ha);
        printf("Department: %s\n",str[i].dp);
        printf("Home Phone: %s\n",str[i].hp);
        printf("Work Phone: %s\n",str[i].wp);
        printf("Campus Box: %s\n",str[i].CB);
    }
    return 0;
}

/*
Title               25         characters
First name          25             ""
Last name           25             ""
Department          60             ""
Address             50             ""
Homephone           50             ""
Work phone          30             ""
Campus Box          30             ""
Total information   20000
*/
