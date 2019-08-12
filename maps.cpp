#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int q,typ,y;
    string x;
    map<string,int>marks;
    cout<<"enter the no of queries\n";
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>typ>>x;
        if(typ==1)
        {
        cin>>y;
        marks.insert(make_pair(x,y));
        }
        if(typ==2)
        marks.erase(x);
        if(typ==3)
        cout<<marks[x]<<endl;
    }
    
}

