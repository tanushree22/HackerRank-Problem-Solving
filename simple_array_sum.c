#include<stdio.h>
#include<stdlib.h>
int sumarr(int *arr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+ *(arr+i);
    }
    return sum;
}
int main()
{
    int *arr,n;
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int sum=sumarr(arr,n);
    printf("%d\n",sum);
}