#include<stdio.h>

int main()
{
    int i,size;
    
    printf("Enter array size : ");
    scanf("%d",&size);
    int arr[size],*ptr[size];
    for(i=0;i<size;i++)
    {
        printf("array[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<size;i++)
    {
        ptr[i]=&arr[i];
    }
    for(i=0;i<size;i++)
    {
        printf("%d",*ptr[i]);
    }
    
    return 0;
}