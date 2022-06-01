int main()
{
   int x=0,n=0;
    while((1<<x)<=n){
       x++;
    }
    x=x-1;
    int result=0;
    result=(n&(1<<x));
    result=1;
    int ans=(1<<x);
    //cout<<ans;
    
    
    for(int i=x-1;i>=0;i--){
       if((n&(1<<i))>0){
          result=result^1;
       }
       else{
          result=result^0;
       }
       
       if(result>0)
       ans=ans+(1<<i);
    }
    cout<<ans;
    return 0;
}
