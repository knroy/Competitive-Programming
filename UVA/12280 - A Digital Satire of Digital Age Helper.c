#include <stdio.h>
#include <string.h>

int dtb(char a[])
{
    int count1 = 0,i;
    int count0 = 0;
    int len = strlen(a);
    for(i=0; i<len; i++)
    {
        int n = (int)a[i];
        while(n!=0)
        {
            int temp = n%2;
            if(temp==0)
                count0++;
            else
                count1++;
            n = n/2;
        }
    }
    return count0*250 + count1*500;
}

int main()
{
    //freopen("In.txt", "r", stdin);
    char ascii1[100];
    char ascii2[100],arr[100];
    char str[100][100];
    int i,j,k1,k2,l,l_num,r_num,r,ls,rs,n,ccase=0;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char g1[8][18]= {"........||.../\\...","........||../..\\..",".../\\...||./....\\.","../..\\..||/......\\","./....\\.||\\______/","/......\\||........","\\______/||........"};
        char g2[8][18]= {".../\\...||........","../..\\..||........","./....\\.||.../\\...","/......\\||../..\\..","\\______/||./....\\.","........||/......\\","........||\\______/"};
        char g3[8][18]= {"........||........",".../\\...||.../\\...","../..\\..||../..\\..","./....\\.||./....\\.","/......\\||/......\\","\\______/||\\______/","........||........"};
        ccase++;
        i = 0;
        while(i<8)
        {
            gets(arr);
            int len = strlen(arr);
            if(arr[0]=='-')
                break;
            for(j=0; j<len; j++)
            {
                str[i][j] = arr[j];
            }
            arr[j]='\0';
            str[i][j]='\0';
            i++;
        }
        ls = 0;
        rs = 0;
        l = 0;
        r = 0;
        k1 = 0;
        k2 = 0;
        for(i=0; i<7; i++)
        {
            for(j=0; j<18; j++)
            {
                if(j<9)
                {
                    if(str[i][j]>='A' && str[i][j]<='Z')
                    {
                        ascii1[k1] = str[i][j];
                        k1++;
                    }
                    if(ls==0)
                    {
                        if(str[i][j]=='/')
                        {
                            l = i;
                            ls=1;
                        }
                    }
                }
                else if(j>8)
                {
                    if(str[i][j]>='A' && str[i][j]<='Z')
                    {
                        ascii2[k2++] = str[i][j];
                    }
                    if(rs==0)
                    {
                        if(str[i][j]=='/')
                        {
                            r = i;
                            rs=1;
                        }
                    }

                }
            }
        }
        ascii1[k1] = '\0';
        ascii2[k2] = '\0';
        l_num = dtb(ascii1);
        r_num = dtb(ascii2);





















        l_num = 0,r_num = 0;
        r = 0,l=0;
        memset(str,'\0',sizeof(str));
        memset(arr,'\0',sizeof(arr));
        memset(ascii1,'\0',sizeof(ascii1));
        memset(ascii2,'\0',sizeof(ascii2));
    }
    return 0;
}
/*
else
        {
            if(l_num==r_num)
            {
                printf("Case %d:\n",ccase);
                for(i=0; i<7; i++)
                {
                    for(j=0; j<18; j++)
                    {
                        if(str[i][j]>='A' && str[i][j]<='Z' && j<9)
                            g3[i+r-1][j] = str[i][j];
                        if(str[i][j]>='A' && str[i][j]<='Z' && j>8)
                        {
                            g3[i+l-1][j] = str[i][j];
                        }
                    }
                }
                for(i=0; i<7; i++)
                {
                    for(j=0; j<18; j++)
                    {
                        printf("%c",g3[i][j]);
                    }
                    printf("\n");
                }
            }
            else if(l_num<r_num)
            {
                printf("Case %d:\n",ccase);
                for(i=0; i<7; i++)
                {
                    for(j=0; j<18; j++)
                    {
                        if(str[i][j]>='A' && str[i][j]<='Z' && j<9)
                            g2[i-l][j] = str[i][j];
                        if(str[i][j]>='A' && str[i][j]<='Z' && j>8)
                        {
                            g2[i-l][j] = str[i][j];
                        }
                    }
                }
                for(i=0; i<7; i++)
                {
                    for(j=0; j<18; j++)
                    {
                        printf("%c",g2[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Case %d:\n",ccase);
                for(i=0; i<7; i++)
                {
                    for(j=0; j<18; j++)
                    {
                        if(str[i][j]>='A' && str[i][j]<='Z' && j<9)
                            g1[i+r][j] = str[i][j];
                        if(str[i][j]>='A' && str[i][j]<='Z' && j>8)
                        {
                            g1[i-r][j] = str[i][j];
                        }
                    }
                }
                for(i=0; i<7; i++)
                {
                    for(j=0; j<18; j++)
                    {
                        printf("%c",g1[i][j]);
                    }
                    printf("\n");
                }
            }
        }
*/

