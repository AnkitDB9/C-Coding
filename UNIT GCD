#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        if(n==1){
            cout<<"1"<<"\n";
            cout<<"1"<<" "<<"1"<<"\n";
        }
        else if(n==2){
            cout<<"1"<<"\n";
            cout<<"1"<<" "<<"1 2"<<"\n";
        }
        else if(n%2!=0){
            cout<<n/2<<endl;
            cout<<"3 "<<"1 2 3"<<"\n";
            int i=4;
            while(i<=n)
            {   
                cout<<"2"<<" "<<i<<" "<<i+1<<"\n";
                i=i+2;
            }
        }
        else
        {
            cout<<n/2<<"\n";
            cout<<"3 "<<"1 2 3"<<"\n";
            int i=4;
            while(i<n)
            {   
                cout<<"2"<<" "<<i<<" "<<i+1<<"\n";
                i=i+2;
            }
            cout<<"1"<<" "<<i<<"\n";
        }
    }

    return 0;
}
