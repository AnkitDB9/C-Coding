class Solution{
  public:
    //Complete this function
    int fun(int n){
   if(n==0){
      return 0;
   }
   return n%10+fun(n/10);
}
int digitalRoot(int n)
{
   int x=fun(n);
   if(x>9){
      return digitalRoot(x);}
   else{
      return x;
   }
}
};
