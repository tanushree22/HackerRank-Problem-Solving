#include<stdio.h>
#include<stdlib.h>
unsigned long long sumarr(unsigned long long *arr,int size)
{
    unsigned long long  sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+(*(arr+i));
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    unsigned long long *ptr=(unsigned long long *)malloc(sizeof(unsigned long long)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%llu", ptr+i);
    }
    unsigned long long sum=sumarr(ptr,n);
    printf("%llu\n",sum);
}