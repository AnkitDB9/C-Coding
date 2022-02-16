
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int current=0,Q,N;
    cin>>N>>Q;
    int fi,di;
    long long sum=0;
    for(int i=0;i<Q;i++){
        cin>>fi>>di;
        sum=sum+abs(current-fi)+abs(fi-di);
        current=di;
        
    }
    cout<<sum<<"\n";

    return 0
