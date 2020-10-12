#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct meet
{
  int str,end,index;  
};

bool comp(meet a,meet b)
{
    return a.end<b.end;
}
void schedule(struct meet m[],int n)
{
    sort(m,m+n,comp);
    int i=0;
    
    cout<<m[i].index<<" ";
    for(int j=1;j<n;j++)
    {
        if(m[j].str>=m[i].end)
        {
            cout<<m[j].index<<" ";
            i=j;
        }
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    struct meet m[n];
	    int x;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        m[i].str=x;
	        m[i].index=i+1;
	    } 
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        m[i].end=x;
	    } 
	  
	    schedule(m,n);
	   
	    cout<<endl;
	}
	
	
	return 0;
}
