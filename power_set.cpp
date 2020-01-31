#include<bits/stdc++.h>
using namespace std;
void powerset(string x)
{
    int m=x.length();
    int n=pow(2,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i&(1<<j))
            {
                cout<<x[j];
            }
            
        }
        cout<<"\n";
    }
    
}
int main()
{
    string x;
    cin>>x;
    powerset(x);
}