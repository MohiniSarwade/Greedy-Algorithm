#include<bits/stdc++.h>
using namespace std;

int findPlatform(int arr[],int dept[],int n)
{
    int i=1,j=0,plat=1,res=1;
    sort(arr,arr+n);
    sort(dept,dept+n);
    
    while(i<n && j<n)
    {
        if(arr[i]<=dept[j])
        {
            plat++;
            i++;
        }
        else if(arr[i]>dept[j])
        {
            plat--;
            j++;
        }
        if(res<plat)
            res=plat;
    }
   return res;
}

int main()
{
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 }; 
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Minimum Number of Platforms Required = "
         << findPlatform(arr, dep, n); 
    return 0; 
}
