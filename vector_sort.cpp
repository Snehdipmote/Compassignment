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
    sort(number.begin(),number.end());
    cout<<"sorted numbers are as follows\n";
    for(int i=0;i<n;i++)
    {
        cout<<number[i]<<" ";
    }
    return 0;
    
}



