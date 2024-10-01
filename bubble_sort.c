#include<stdio.h>
int main()
{
    int arr_1[5],i,j,temp;
    for(i=0;i<5;i++)
    {
       printf("enter the values in array:");
       scanf("%d",&arr_1[i]);
    }
    for(i=0;i<4;i++)
 { for(j=0;j<4-i;j++)
    {
       if(arr_1[j] > arr_1[j+1])
      {
        temp=arr_1[j];
        arr_1[j]=arr_1[j+1];
        arr_1[j+1]=temp;
      }
    }
 } 
       printf("the sorted array is:");
       for(i=0;i<5;i++)
       {
        printf("%d",arr_1[i]);
       }
       printf("\n");
       return 0;
}