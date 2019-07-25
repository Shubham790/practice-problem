#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x) 
{
  while(l<=r)
  {
    int mid=(l+r)/2;
    if(arr[mid]<x)
    {
      l=mid+1;
    }
    else if(arr[mid]>x)
    {
      r=mid-1;
    }
    else
      return mid;
  }
  return -1;
}

int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 50; 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result); 
    return 0; 
} 
