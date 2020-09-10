#include<bits/stdc++.h>
using namespace std;
int partiotion(char nuts[], int low, int high,char pivot)
{
    
    int left=low;
    while(left<high)
    {
        while(nuts[left]<=pivot)
            left++;
        while(nuts[high]>pivot)
            high--;
        if(left<high)
            swap(nuts[left],nuts[high]);
    }
    swap(nuts[low], nuts[high]);
    return high;
}

int R_partiotion(char nuts[], char bolts[],int low, int high)
{
    srand(time(NULL));
    int random=low+rand()%(high-low);
    swap(bolts[low],bolts[random]);
    
    return partiotion(nuts,low,high,bolts[low]);
}

void matchPairs(char nuts[],char bolts[], int low, int high)
{
    if(low<high)
    {
        int p=R_partiotion(nuts,bolts,low,high);
        partiotion(bolts,low, high,nuts[p]);
        
        matchPairs(nuts, bolts, low, p-1); 
        matchPairs(nuts, bolts, p+1, high); 
    }
    
}
void print(char nuts[], int n)
{
    for(int i=0;i<n;i++)
        cout<<nuts[i]<<" ";
    cout<<endl;
}
int main() 
{ 
      
    // Nuts and bolts are represented  
    // as array of characters 
    char nuts[] = {'@', '#', '$', '%', '^', '&'}; 
    char bolts[] = {'$', '%', '&', '^', '@', '#'}; 
  
    // Method based on quick sort which  
    // matches nuts and bolts 
    matchPairs(nuts, bolts, 0, 5); 
  
    printf("Matched nuts and bolts are : \n"); 
    print(nuts,6);
    print(bolts,6);
}
