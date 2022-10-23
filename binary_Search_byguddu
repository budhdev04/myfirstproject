#include<stdio.h>

void binarySearchAsc(int e , int arr[] , int n);
void binarySearchDsc(int e , int arr[] , int n);

int main()
{
    int n , ele;
    printf("Enter the number of elements you want to input\n");
    scanf("%d",&n);
    int arr[n];
    int i , j;
    printf("Enter the sorted array (ascending or descending)\n");
    for ( i = 0; i <= n-1; i++)
    {
        printf("Enter element [%d] - ",i);
        scanf("%d",&arr[i]);
    }
    for ( j = 0; j <= n-1; j++)
    {
        printf("%d ",arr[j]);
    }
    printf("Enter the element which you want to search\n");
    scanf("%d",&ele);
    if (arr[0]<arr[1])
    {
        binarySearchAsc(ele , arr , n);
    }
    if (arr[0]>arr[1])
    {
        binarySearchDsc(ele , arr , n);
    }
    return 0;
}

void binarySearchAsc(int e , int arr[] , int n)
{
    int low = 0 , high = n-1 , mid , result = 0 , count = 0;
    while (high>=low)
    {
        mid = (low+high)/2;
        if (arr[mid] == e)
        {
            result++;
            count++;
            break;
        }
        if (arr[mid] > e)
        {
            high = mid-1;
            count++;
        }
        if (arr[mid] < e)
        {
            low = mid+1;
            count++;
        }
    }
    printf("The number of key comparison is %d\n",count);
    if (result == 1)
    {
        printf("the element %d is at %d position\n", e , mid+1);
    }
    else
    {
        printf("Element not found\n");
    }
}

void binarySearchDsc(int e , int arr[] , int n)
{
    int low = 0 , high = n-1 , mid , result = 0 , count = 0;
    while (high>=low)
    {
        mid = (low+high)/2;
        if (arr[mid] == e)
        {
            result++;
            count++;
            break;
        }
        if (arr[mid] > e)
        {
            low = mid + 1;
            count++;
        }
        if (arr[mid] < e)
        {
            high = mid - 1;
            count++;
        }
    }
    printf("The number of key comparison is %d\n",count);
    if (result == 1)
    {
        printf("the element %d is at %d position\n", e , mid+1);
    }
    else
    {
        printf("Element not found\n");
    }
}

