#include<bits/stdc++.h>
using namespace std;

int number_of_tower(int house[],int range, int n)
{
    sort(house, house+n);
    int i=0;
    int count=0;
    while(i<n)
    {
        count++;
        int l=house[i]+range;
        while(i<n && house[i]<=l)
            i++;
        i--;
        l=house[i]+range;
        while(i<n && house[i]<=l)
            i++;
    }
    return count;
}
int main() 
{ 
    // given elements 
    int house[] = { 7, 2, 4, 6, 5, 9, 12, 11 }; 
    int range = 2; 
    int n = sizeof(house) / sizeof(house[0]); 
  
    // print number of towers 
    cout << number_of_tower(house, range, n); 
} 
