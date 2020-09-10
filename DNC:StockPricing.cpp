#include<bits/stdc++.h>
using namespace std;
int Min(int a[], int l,int mid)
{
    int minm=l;
    for(int i=l+1;i<=mid;i++)
    {
        if(a[i]<a[minm])
            minm=i;
    }
    return minm;
}
int Max(int a[], int mid,int r)
{
    int maxm=mid;
    for(int i=mid+1;i<=r;i++)
    {
        if(a[i]>a[maxm])
            maxm=i;
    }
    return maxm;
}

void stockStrategy(int a[], int l, int r, int &pr,int &bS,int &sS)
{
    if(l+1==r)
    {
        pr=0;
        bS=l;
        sS=l;
        return;
    }
    int mid=(l+r)/2;
    int prL,bSL,sSL,prR,bSR,sSR;
    stockStrategy(a,l,mid,prL,bSL,sSL);
    stockStrategy(a,mid,r,prR,bSR,sSR);
    
    int minLeft=Min(a,l,mid);
    int maxRight=Max(a,mid,r);
    int profit=a[maxRight]-a[minLeft];
    if(prL>profit)
    {
        pr=prL;
        bS=bSL;
        sS=sSL;
        return;
    }
    else if(prR>profit)
    {
        pr=prR;
        bS=bSR;
        sS=sSR;
        return;
    }
    else
    {
        pr=profit;
        bS=minLeft;
        sS=maxRight;
        return;
    }
    
}

int main() 
{ 
    int arr[] = {80, 2, 6, 3, 100}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int profit,buyStock,sellStock;
    stockStrategy(arr,0,n-1,profit,buyStock,sellStock);
    cout<<"Profit "<<profit<<endl;
    cout<<"Buy day "<<buyStock<<"-->"<<arr[buyStock]<<endl;
    cout<<"Sell day "<<sellStock<<"--> "<<arr[sellStock]<<endl;
    
    return 0;
}
    
    
    
