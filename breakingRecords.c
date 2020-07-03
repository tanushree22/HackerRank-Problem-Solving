// Complete the breakingRecords function below.

// Please store the size of the integer array to be returned in result_count pointer. For example,
// int a[3] = {1, 2, 3};
//
// *result_count = 3;
//
// return a;
//
int* breakingRecords(int scores_count, int* scores, int* result_count) {
    int min,max;
    min=max= *(scores+0);
    *result_count=2;
    int *result=(int*)malloc(sizeof(int)* (*(result_count)));
    for(int i=0;i<2;i++)
    {
        *(result+i)=0;
    }
    for(int i=0;i<scores_count;i++)
    {
        if(*(scores+i)<min)
        {
            *(result+1)+=1;
            min=*(scores+i);
        }
        if(*(scores+i)>max)
        {
            *(result+0)+=1;
            max=*(scores+i);
        }
    }
    return result;

}
