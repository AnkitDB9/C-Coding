/* EFFICIENT SOLUTION BY BRAIN KERNINGAMS ALGORITHMS */
int sol(int n)
{
    int res=0;
    while(n>0){
        n=(n&(n-1));
        res++;
    }
    return res;
}


#include <iostream>

using namespace std;

int main()
{
    int n=13; 
    int count=0;
    for(int i=1;i<32;i=i*2){ /* 1=0001, 2=0010, 4=0100, 8=1000, etc */
    if((n&i)!=0){  /*checking each bits of n with multiplying by 1,2,4,8,.... 2^32*/ 
        count++;
        }
    
    }
    cout<<count;

    return 0;
}
