#include<stdio.h>
#include<stdlib.h>
int* comparetriplets(int *a,int *b)
{
    int *comp=(int*)malloc(sizeof(int)*2);
    for(int i=0;i<3;i++)
    {
        if((*(a+i))>(*(b+i)))
        {
            *(comp+0)+=1;
        }
        else if((*(a+i))<(*(b+i)))
        {
            *(comp+1)+=1;
        }
    }
    return comp;
}
int main()
{
    int *alice=(int*)malloc(sizeof(int)*3);
    int *bob=(int*)malloc(sizeof(int)*3);
    for(int i=0;i<3;i++)
    {
        scanf("%d",alice+i);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",bob+i);
    }
    int *compare=(int*)malloc(sizeof(int)*2);
    for(int i=0;i<2;i++)
    {
        *(compare+i)=0;
    }
    compare=comparetriplets(alice,bob);
    for(int i=0;i<2;i++)
    {
        //*(comp+i)=0;
        printf("%d ",*(compare+i));
    }
}