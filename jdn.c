#include<stdio.h>

void showArray(int arr[] , int u_s)
{
    for (int i = 0; i < u_s; i++)
    {
        printf("%d , ",arr[i]);
    }
    
}

int insArray(int arr[] , int u_s , int e , int idx , int capacity)
{
    if (idx >= u_s)
    {
        return -1;
    }
    
    for (int i = u_s-1 ; i >= idx ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[idx] = e;
    return 1;
    
}

int main()
{
    int arr[100] = {23 , 34 , 45 , 56 , 67 , 90};
    int used_size = 6 , element = 99 , index = 3;
    showArray(arr , used_size);
    printf("\n");
    insArray(arr , used_size , element , index , 100);
    used_size += 1;
    showArray(arr , used_size);
    return 0;
}
