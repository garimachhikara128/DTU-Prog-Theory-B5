#include<stdio.h>
// first array : lo -> mid
// second array : mid + 1 -> hi
void merge2SortedArrays(int arr[], int lo, int mid, int hi)
{
    int n1 = mid - lo + 1;
    int n2 = hi - (mid+1) + 1 ;

    int arr1[n1] ;
    int arr2[n2] ;

    for(int i = 0 ; i < n1 ; i++)
        arr1[i] = arr[lo+i] ;

    for(int j = 0 ; j < n2 ; j++)
        arr2[j] = arr[mid+1+j] ;

    int i = 0, j = 0, k = lo ;

    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
            arr[k++] = arr1[i++] ;
        else
            arr[k++] = arr2[j++] ;
    }

    // first array over
    while(j < n2)
        arr[k++] = arr2[j++] ;

    // second array over
    while(i < n1)
        arr[k++] = arr1[i++] ;
    

}

void mergeSort(int arr[], int lo, int hi)
{
    if(lo == hi)
        return ;

    int mid = (lo+hi)/2 ;

    mergeSort(arr,lo,mid) ;
    mergeSort(arr,mid+1,hi) ;
    merge2SortedArrays(arr,lo,mid,hi) ;

}

int main()
{
    int arr[] = {10,20,5,60,12,25,85,17} ;

    int n = sizeof(arr)/sizeof(int) ;

    mergeSort(arr,0,n-1) ;

    for(int i = 0 ; i < n ; i++)
        printf("%d", arr[i]) ;

    return 0 ; 
}