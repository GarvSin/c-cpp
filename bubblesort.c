/*Bubble Sort
  Gaurav Singh
  28 Sept 2020*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[] = {4,2,5,1};

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }

    for(int i=0;i<4;i++)
    {
        printf("%d\n",arr[i]);
    }
    getch();
    return(0);
}
