#include<stdio.h>

int main()
{
    int i,arr[4];
    
    printf("Enter any four aliment of array : ");
    
    for(i=0;i<4;i++)
    {
        printf("array[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    
    if(arr[0]<arr[1])
    {
        if(arr[1]<arr[2])
        {
            if(arr[2]<arr[3])
            {
                printf("argest alliment in array[3] : %d",arr[3]);
            }
            else
            {
                printf("argest alliment in array[2] : %d",arr[2]);
            }
        }
        else
        {
            if(arr[1]<arr[3])
            {
                printf("argest alliment in array[3] : %d",arr[3]);
            }
            else
            {
                printf("argest alliment in array[1] : %d",arr[1]);
            }
        }
    }
    else
    {
        if(arr[0]<arr[2])
        {
            if(arr[2]<arr[3])
            {
                printf("argest alliment in array[3] : %d",arr[3]);
            }
            else
            {
                printf("argest alliment in array[2] : %d",arr[2]);
            }
        }
        else
        {
            if(arr[0]<arr[3])
            {
                printf("argest alliment in array[3] : %d",arr[3]);
            }
            else
            {
                printf("argest alliment in array[0] : %d",arr[0]);
            }
        }
    }
    
    
    return 0;
}