#include<bits/stdc++.h>
using namespace std;
long calculate(int k, int n)
{
    long a;
    if(k==0 ||n==0)
        return 1;
    else
    {if(n%2==1)
    {
        a=calculate(k,n-1);
        return a*k;
    }
    else
    {
        a=calculate(k,n/2);
        return a*a;
    }
    }
    
}

int main()
{
    cout<<calculate(9,24)<<endl;
    return 0;
}
