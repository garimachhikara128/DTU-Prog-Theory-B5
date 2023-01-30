#include<stdio.h>

void quickSort(int arr[], int lo, int hi)
{
    if(lo >= hi)
        return ;

    // partitioning
    int left = lo ;
    int right = hi ;

    int mid = (lo+hi)/2 ;

    int pivot = arr[mid] ;

    while(left <= right)
    {
        // left problem
        while(arr[left] < pivot)
            left++ ;

        // right problem
        while(arr[right] > pivot)
            right-- ;
        
        // swap
        if(left <= right)
        {
            int temp = arr[left] ;
            arr[left]= arr[right] ;
            arr[right] = temp ;
            left++ ;
            right-- ;
        }
    }

    quickSort(arr,lo,right) ;
    quickSort(arr,left,hi) ;
}

int main()
{
    int arr[] = {10,20,5,60,12,25,85,17} ;

    int n = sizeof(arr)/sizeof(int) ;

    quickSort(arr,0,n-1) ;

    for(int i = 0 ; i < n ; i++)
        printf("%d ", arr[i]) ;

    return 0 ; 
}