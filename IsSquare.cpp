#include<bits/stdc++.h>
using namespace std;
int IsSquare(int x)
{
    int count=0;
    int i=2;
    while(i*i!=x)
    {
        i++;
        count++;
    }
    cout<<"Number of operations are"<<count<<endl;
    if(i*i==x)
        return i;
    else
        return -1;
}

int main()
{
    int x=2401;
    int p=IsSquare(x);
    if(p!=-1)
        cout<<"number is square of "<<p<<endl;
    else
        cout<<"Number is not a square"<<endl;
    return 0;
}
