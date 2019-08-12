#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n,x,q,y;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {cout<<v[i]<<" ";}
    cout<<"\n";
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>y;
        if(y==v[i])
        cout<<"Yes "<<y<<endl;
        else
        cout<<"No "<<y<<endl;
       
    }
}

