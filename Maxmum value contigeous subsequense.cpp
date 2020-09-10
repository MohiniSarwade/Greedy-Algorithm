#include<bits/stdc++.h>
using namespace std;

void MaxSum(int arr[], int n)
{
    int cur=arr[0];
    int maxm=arr[0];
    for(int i=1;i<n;i++)
    {
        cur=max(arr[i],cur+arr[i]);
        maxm=max(cur,maxm);
    }
    
    cout<<"maxiumum sum is "<<maxm<<endl;
}
int main()
{
    int arr[]={-2,11,-4,13,-5,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    MaxSum(arr,n);
    return 0;
}
