#include<bits/stdc++.h>
using namespace std;
double FindMedian(int a[], int n, int b[], int m)
{
    int min_ele=0,max_ele=n,i,j,median;
    while(min_ele<=max_ele)
    {
        i=(min_ele+max_ele)/2;
        j=(n+m+1)/2 -i;
        
        if(j<0)
        {
            max_ele=i-1;
            continue;
        }
        if(i<n && j>0 && a[i]<b[j-1])
            max_ele=i+1;
        else if(i>0 && j<m && a[i-1]>b[j])
            max_ele=i-1;
        else
        {
            if(i==0)
                median=b[j-1];
            else if(j==0)
                median=a[i-1];
            else
                median=max(b[j-1],a[i-1]);
            break;
        }
    }
    if((n+m)%2==1)
        return (double)median;
    
    if(i==n)
        return (median+b[j])/2.0;
    if(j==m)
        return (median+a[i])/2.0;
    else
        return (median+min(a[i],b[j]))/2.0;
}

int main() 
{ 
    int a[] = {900}; 
    int b[] = { 10, 13, 14}; 
    int n = sizeof(a) / sizeof(int); 
    int m = sizeof(b) / sizeof(int); 
    if(n<m)
        cout<<"Median is "<<FindMedian(a,n,b,m);
    else
        cout<<"Median is "<<FindMedian(b,m,a,n);

    return 0;
}
