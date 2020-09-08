#include<bits/stdc++.h>
using namespace std;

struct Job
{
  public:
  char c;
  int deadL,prof;
};
bool comp(struct Job a, struct Job b)
{
    return a.prof>b.prof;
}
void printJobScheduling(struct Job arr[], int n)
{
    sort(arr,arr+n,comp);
    
    vector<char>tmp(n,'$');
    
    int totolProf=0;
    for(int i=0;i<n;i++)
    {
        int x=arr[i].deadL;
        for(int j=min(n,x)-1;j>=0;j--)
        {
            if(tmp[j]=='$')
            {
                tmp[j]=arr[i].c;
                totolProf+=arr[i].prof;
                break;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(tmp[i]!='$')
            cout<<tmp[i]<<" ";
    }
    cout<<endl<<"Total Profit "<<totolProf<<endl;
        
}

int main() 
{ 
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, 
                   {'d', 1, 25}, {'e', 3, 15}}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "Following is maximum profit sequence of jobsn"; 
    printJobScheduling(arr, n); 
    return 0; 
} 
