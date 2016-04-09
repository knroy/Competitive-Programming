#include<stdio.h>
#include<string.h>

typedef struct
{
    char plural[100];
    char ir_single[100];
    char single[100];
} deli;

int main()
{
    deli str[100],arr[100];
    char arr1[100];
    int l,n,i,j,k,temp,len;
    scanf("%d %d",&l,&n);
    getchar();
    for(i=0; i<l; i++)
    {
        scanf("%s %s",str[i].ir_single,str[i].plural);
    }
    for(i=0; i<n; i++)
    {
        scanf("%s",arr[i].single);
    }
    for(i=0; i<n; i++)
    {
        temp = 0;
        for(j=0; j<l; j++)
        {
            if(strcasecmp(arr[i].single,str[j].ir_single)==0)
            {
                printf("%s\n",str[j].plural);
                temp = 1;
            }
        }
        if(temp!=1)
        {
            strcpy(arr1,arr[i].single);
            len = strlen(arr1);
            if(arr1[len-1]=='y' && (arr1[len-2]!='a' && arr1[len-2]!='e' && arr1[len-2]!='i' && arr1[len-2]!='o' && arr1[len-2]!='u' ))
            {
                for(k=0; k<len-1; k++)
                    printf("%c",arr1[k]);
                printf("ies\n");
            }
            else if(arr1[len-1]=='o' || arr1[len-1]=='s' || arr1[len-1]=='x')
            {
                for(k=0; k<len; k++)
                    printf("%c",arr1[k]);
                printf("es\n");
            }
            else if((arr1[len-1]=='h' && arr1[len-2]=='c') || (arr1[len-1]=='h' && arr1[len-2]=='s'))
            {
                for(k=0; k<len; k++)
                    printf("%c",arr1[k]);
                printf("es\n");
            }
            else
            {
                for(k=0; k<len; k++)
                    printf("%c",arr1[k]);
                printf("s\n");
            }
        }
    }
    return 0;
}
