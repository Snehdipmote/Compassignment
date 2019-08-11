#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cout<<"enter the size\n";
    int n,elem;
    cin>>n;
    vector<int> number;
    for(int i=0;i<n;i++)
    {
        cin>>elem;
        number.push_back(elem);
    }
    int x;
    int a,b;
    cin>>x;
    cin>>a>>b;
    cout<<"after deleting xth element\n";
    number.erase(number.begin()+x-1);
    for(int i=0;i<n-1;i++)
    {
        cout<<number[i]<<" ";
    }
    cout<<"\n";
    cout<<"after deleting elements in the range a to b\n";
    number.erase(number.begin()+a-1,number.begin()+b-1);
    for(int i=0;i<n-b+a-1;i++)
    {
        cout<<number[i]<<" ";
    }
    return 0;
    
}

