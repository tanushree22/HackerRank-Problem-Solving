#include<stdio.h>
#include<stdlib.h>
int* gradingStudents(int grades[60],int n)
{
    int *rg=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        if(grades[i]>=38)
            {int z=(grades[i]-grades[i]%5)+5;
            if(z-grades[i]<3)
            {
                *(rg+i)=z;
            }
            else
            {
                *(rg+i)=grades[i];
            }
        }
        else
        {
            *(rg+i)=grades[i];
        }
    }
    return rg;
}
int main()
{
    int grades[60],*roundedgrades;int n;
    scanf("%d",&n);
    roundedgrades=(int*)malloc(sizeof(int)*n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&grades[i]);
    }
    roundedgrades=gradingStudents(grades,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(roundedgrades+i));
    }

    
}
