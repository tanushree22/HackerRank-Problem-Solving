#include<stdio.h>
int diagonaldiff(int a[][100],int r,int c)
{
    int primesum=0,secsum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                primesum+=a[i][j];
            }
            if((i+j)==r-1)
            {
                secsum+=a[i][j];
            }
        }
    }
    int diff=primesum-secsum;
    if(diff<0)
    {
        diff = -(diff);
    }
    return diff;
}
int main()
{
    int a[100][100],row,col;
    scanf("%d",&row);
    col=row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int diff=diagonaldiff(a,row,col);
    printf("%d\n",diff);
}
