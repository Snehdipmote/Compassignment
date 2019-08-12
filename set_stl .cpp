/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int q,x,y;
    set<int>s;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>y>>x;
        if(y==1)
        s.insert(x);
        if(y==2)
        s.erase(x);
        if(y==3)
        {
            set<int>::iterator itr=s.find(x);
            if(itr==s.end())
            cout<<"No\n";
            else
            cout<<"Yes\n";
            
        }
        
    }
    
    return 0;
}

