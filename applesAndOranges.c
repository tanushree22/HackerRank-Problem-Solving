#include<stdio.h>
void countApplesandOranges(int s,int t,int a,int b,int appcount,int orangecount,int *apples,int *oranges)
{
    int ac=0,oc=0;
    for(int i=0;i<appcount;i++)
    {
        if((*(apples+i)+a)>=s &&(*(apples+i)+a)<=t)
        {
            ac+=1;
        }
    }
    for(int i=0;i<orangecount;i++)
    {
        if((*(oranges+i)+b)>=s &&(*(oranges+i)+b)<=t)
        {
            oc+=1;
        }
    }
    printf("%d\n",ac);
    printf("%d\n",oc);
}
int main()
{
    int s,t,a,b,app,orr,*apples,*oranges;
    
    scanf("%d",&s);
    scanf("%d",&t);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&app);
    scanf("%d",&orr);
    apples=(int *)malloc(sizeof(int)*app);
    oranges=(int*)malloc(sizeof(int)*orr);
    for(int i=0;i<app;i++)
    {
        scanf("%d",apples+i);
    }
    for(int i=0;i<orr;i++)
    {
        scanf("%d",oranges+i);
    }
    countApplesandOranges(s, t, a, b, app, orr, apples, oranges);
}
