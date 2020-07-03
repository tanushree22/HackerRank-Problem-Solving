#include<stdio.h>
int candleno(long long arr[100000],long long size)
{
    long long maxheight=0;
    for(long long i=0;i<size;i++)
    {
        if(arr[i]>maxheight)
        {
            maxheight=arr[i];
        }
    }
    long long maxcount=0;
    for(long long i=0;i<size;i++)
    {
        if(arr[i]==maxheight)
        {
            maxcount+=1;
        }
    }
    return maxcount;
}
int main()
{
    long long arr[100000],n;
    scanf("%llu",&n);
    for(long long i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long count=candleno(arr, n);
    printf("%llu\n",count);
}
