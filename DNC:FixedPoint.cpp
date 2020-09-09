#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l,int r)
{
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==mid)
            return mid;
        else if(mid>arr[mid])
            return binarySearch(arr,mid+1,r);
        else
            return binarySearch(arr,l,mid-1);
    }
    return -1;
}

int main()  
{  
    int arr[10] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    cout<<"Fixed Point is "<< binarySearch(arr, 0, n-1);  
    return 0;  
}  
