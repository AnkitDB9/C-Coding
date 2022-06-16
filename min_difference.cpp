int main()
{
    int arr[]={0,20,0,0,10,30};
    int n=6;
    int res=arr[1]-arr[0];
    int minv=arr[0];
    for(int i=0;i<n;i++){
       res=max(res,arr[i]-minv);
       minv=min(arr[i],minv);
    }
    cout<<res;

    return 0;
}
