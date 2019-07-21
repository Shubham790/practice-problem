//program to find maximum index difference
/*
input:
4
2 4 3 1
output:
2

condition
max(j-i)
a[j]>a[i]
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< pair <int,int> > vect;
    int arr[] = {3,5,4,2};
    int arr1[] = {0,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );
    sort(vect.begin(), vect.end());
    int min=vect[0].second;
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(vect[i].second-min>=max)
        {
            max=vect[i].second-min;
        }
        min=vect[i].second<min?vect[i].second:min;
    }
    cout<<max;
return 0;
}
