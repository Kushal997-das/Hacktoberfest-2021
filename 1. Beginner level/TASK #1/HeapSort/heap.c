#include <stdio.h>
#include<stdlib.h>
void swap(int *v1,int *v2)
{
    int temp;
    temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}
void heapify( int arr[], int n, int i)
{
    int l, r,max;
    max = i;
    l = (2 * i) + 1;
    r = (2 * i) + 2;
    //If left child is greater than the root
    if(l<n && arr[l] > arr[max])
    {
        max = l;
    }
    //If right child is greater than the root
     if(r<n && arr[r] > arr[max])
    {
        max = r;
    }
    //Check if max is changed
    if(max !=i)
    {
        //Swap the elements
        swap(&arr[i], &arr[max]);
        heapify(arr, n, max);
    }
}
void heapSort(int arr[],int n)
{
    int i;
    for (i=(n/2)-1;i>=0;i--)
    {
        //For creating the heap
        heapify(arr, n, i);
    }
    for (i = n-1; i > 0;i--)
    {
        //Deleting the elements 
        swap(&arr[0], &arr[i]);
        //Max heap making 
        heapify(arr, i, 0);
    }
}
int main()
{
   int num[20],i;
    printf("Enter the array");
    for (i = 0; i < 7;i++)
    {
        scanf("%d", &num[i]);
    }
    heapSort(num, 7);
     for (i = 0; i < 7;i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}

