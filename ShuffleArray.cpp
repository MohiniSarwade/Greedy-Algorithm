//works with n=2^i; o(nlogn)

#include<bits/stdc++.h>
using namespace std;
void shuffleArray(int a[], int l,int r)
{
    int c=l+(r-l)/2;
    int q=1+l+(c-l)/2;
    if(l==r)
        return;
    for(int k=1,i=q;i<=c;i++,k++)
    {
        swap(a[i],a[c+k]);
    }
    shuffleArray(a,l,c);
    shuffleArray(a,c+1,r);
}
int main()
{
    int a[]={1,1,1,1,2,2,2,2};
    int n=sizeof(a)/sizeof(a[0]);
    shuffleArray(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
