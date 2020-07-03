#include<stdio.h>
void miniMaxSum(long long arr[5])
{
    int i,j;long long min=0,max=0;
    long long sums[5];
    sums[0]=arr[0]+arr[1]+arr[2]+arr[3];
    sums[1]=arr[0]+arr[2]+arr[3]+arr[4];
    sums[2]=arr[0]+arr[1]+arr[3]+arr[4];
    sums[3]=arr[0]+arr[1]+arr[2]+arr[4];
    sums[4]=arr[1]+arr[2]+arr[3]+arr[4];
    min=sums[0];
    for(int i=0;i<5;i++)
    {
        if(sums[i]>max)
        {
            max=sums[i];
        }
        if(sums[i]<min)
        {
            min=sums[i];
        }
    }
    printf("%lld %lld\n",min,max);
}
int main()
{
    long long arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%lld",&arr[i]);
    }
    miniMaxSum(arr);
}
