#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *s=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",s+i);
    }
    int d,m;
    scanf("%d %d",&d,&m);
    if(m>n)
    {
        exit(0);
    }
    int check,count=0;
    for(int i=0;i<n;i++)
    {
        check=0;
        for(int j=0;j<m;j++)
        {
            check+=*(s+(i+j));
        }
        if(check==d)
        {
            count+=1;
        }
    }
    printf("%d\n",count);
}
