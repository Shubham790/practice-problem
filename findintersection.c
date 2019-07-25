/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Read only ( DON'T MODIFY ) Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* intersect(const int* A, int n1, const int* B, int n2, int *len1) {
    int i=0,j=0,k=0;
    int t=n1;
  
    int *arr=(int*) malloc(sizeof(int)*(n1));
   // printf("%d",*len1);
    while(i<n1 && j<n2)
    {
        if(A[i]==B[j])
        {
            arr[k]=B[j];
            j++;
            i++;
            k++;
        }
        else if (B[j]<A[i])
        {
            j++;
        }
        else
        {
          i++;
        }
    }
    *len1=k;
    return arr;
}
