#include <stdio.h>
int main()
{
int a[]={1,1,2,2,3,4,5,6};
  int b[]={3,3,5};
  int k=0;
  int j=0;
  int arr[3];
  for(int i=0;i<8;i++)
  {
    if(b[j]==a[i])
    {
      arr[k]=b[j];
      j++;
      k++;
    }
    else if(b[j]<a[i])
    {
      j++;
    }
  }
  for(int i=0;i<k;i++)
  {
    printf("%d ",arr[i]);
  }
    return 0;
}
