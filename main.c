/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
int main(){

    int i,j;
    while((scanf("%d %d",&i,&j)) == 2){
        int max = 0;
        if(i>j)
        {
            int temp=i;
            i=j;
            j=temp;
            
        }
        for(int a = i; a <= j; a++){
        int n = a,cycle = 1;
            while(n > 1){
                if(n%2)n = 3*n+1;
                else n/=2;
                cycle++;
            }
            if(cycle >= max)max = cycle;
        }
        printf("%d %d %d",i,j,max);
    }
    return 0;
}

