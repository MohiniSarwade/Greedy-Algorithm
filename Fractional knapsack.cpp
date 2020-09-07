#include<bits/stdc++.h>
using namespace std;

struct Item
{
  public:
  int weight,value;
   Item(int value, int weight) : value(value), weight(weight) 
   {}
};
bool comp(struct Item a,struct Item b)
{
    double r1=(double)a.value/a.weight;
    double r2=(double)b.value/b.weight;
    return(r1>r2);
}
int fractionalKnapsack(int W,struct Item arr[],int n)
{
    sort(arr,arr+n,comp);
     int currW=0;
     double finVal=0.0;
    for(int i=0;i<n;i++)
    {
        if(currW+arr[i].weight<=W)
        {
            currW=currW+arr[i].weight;
            finVal=finVal+arr[i].value;
        }
        else 
        {
            int remain=W-currW;
            finVal+=(remain*(arr[i].value)/arr[i].weight);
            break;
        }
        
    }
    return finVal;
}

int main() 
{ 
    int W = 50;   //    Weight of knapsack 
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}}; 
  
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(W, arr, n); 
    return 0; 
} 
