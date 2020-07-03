#include<stdio.h>
void computeratio(int arr[100],int size)
{
    int pos,neg,zer;
    pos=neg=zer=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
           {
                    pos+=1;
           } 
        if(arr[i]<0)
          { neg+=1;
          } 
        if(arr[i]==0)
           {zer+=1;} 
    }
    float posr=(float)pos/size;
    float negr=(float)neg/size;
    float zerr=(float)zer/size;
    printf("%0.6f\n",posr);
    printf("%0.6f\n",negr);
    printf("%0.6f\n",zerr);
}
int main()
{
    int arr[100],size;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    computeratio(arr,size);
}
